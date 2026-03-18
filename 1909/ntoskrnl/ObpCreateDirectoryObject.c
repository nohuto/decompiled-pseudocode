/*
 * XREFs of ObpCreateDirectoryObject @ 0x14068136C
 * Callers:
 *     NtCreateDirectoryObject @ 0x140681350 (NtCreateDirectoryObject.c)
 *     NtCreateDirectoryObjectEx @ 0x1406F0080 (NtCreateDirectoryObjectEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCreateObject @ 0x140681580 (ObCreateObject.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(__int64 a1, ACCESS_MASK a2, int a3, void *a4, int a5)
{
  _QWORD *v7; // r12
  char PreviousMode; // si
  NTSTATUS inserted; // edi
  _QWORD *v11; // rdi
  int v12; // r14d
  int v13; // edx
  int v14; // eax
  PVOID v15; // [rsp+50h] [rbp-38h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID v17; // [rsp+60h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-20h] BYREF

  v7 = (_QWORD *)a1;
  Object = 0LL;
  v15 = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_25;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a5 & 2) == 0 )
    {
      a1 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
        a1 = (__int64)v7;
      *(_QWORD *)a1 = *(_QWORD *)a1;
      goto LABEL_7;
    }
LABEL_25:
    inserted = -1073741581;
    goto LABEL_9;
  }
LABEL_7:
  if ( !a4
    || (inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &v17, 0LL),
        v15 = v17,
        inserted >= 0) )
  {
    LOBYTE(a4) = PreviousMode;
    LOBYTE(a1) = PreviousMode;
    inserted = ObCreateObject(a1, (_DWORD)ObpDirectoryObjectType, a3, (_DWORD)a4, 0, 344, 0, 0, (__int64)&Object);
    if ( inserted >= 0 )
    {
      v11 = Object;
      memset(Object, 0, 0x158uLL);
      v11[37] = 0LL;
      *((_DWORD *)v11 + 85) = -1;
      v12 = 0;
      if ( v15 )
      {
        v12 = 4;
        v11[39] = v15;
        v15 = 0LL;
        if ( RtlIsSandboxedToken(0LL, PreviousMode) )
          v12 = 20;
      }
      v13 = v12 | 8;
      if ( (a5 & 1) == 0 )
        v13 = v12;
      v14 = v13 | 0x20;
      if ( (a5 & 2) == 0 )
        v14 = v13;
      *((_DWORD *)v11 + 84) |= v14;
      inserted = ObInsertObject(v11, 0LL, a2, 0, 0LL, &Handle);
      Object = 0LL;
      *v7 = Handle;
    }
  }
LABEL_9:
  if ( v15 )
    ObfDereferenceObject(v15);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)inserted;
}
