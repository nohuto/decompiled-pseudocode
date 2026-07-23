/*
 * XREFs of ObpCreateDirectoryObject @ 0x1406AEF7C
 * Callers:
 *     NtCreateDirectoryObjectEx @ 0x1406AEF40 (NtCreateDirectoryObjectEx.c)
 *     NtCreateDirectoryObject @ 0x1406AEF60 (NtCreateDirectoryObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(__int64 *a1, unsigned int a2, int a3, void *a4, int a5)
{
  char PreviousMode; // si
  __int64 v9; // rcx
  int inserted; // edi
  _QWORD *v12; // rdi
  int v13; // r14d
  int v14; // edx
  int v15; // eax
  PVOID *Object; // [rsp+20h] [rbp-68h]
  PVOID v17; // [rsp+50h] [rbp-38h]
  PVOID v18; // [rsp+58h] [rbp-30h] BYREF
  PVOID v19; // [rsp+60h] [rbp-28h] BYREF
  __int64 v20; // [rsp+68h] [rbp-20h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_25;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a5 & 2) == 0 )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a1;
      *(_QWORD *)v9 = *(_QWORD *)v9;
      goto LABEL_7;
    }
LABEL_25:
    inserted = -1073741581;
    goto LABEL_9;
  }
LABEL_7:
  if ( !a4
    || (inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &v19, 0LL),
        v17 = v19,
        inserted >= 0) )
  {
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ObpDirectoryObjectType,
                 a3,
                 PreviousMode,
                 (__int64)Object,
                 344,
                 0,
                 0,
                 &v18,
                 0LL);
    if ( inserted >= 0 )
    {
      v12 = v18;
      memset(v18, 0, 0x158uLL);
      v12[37] = 0LL;
      *((_DWORD *)v12 + 85) = -1;
      v13 = 0;
      if ( v17 )
      {
        v13 = 4;
        v12[39] = v17;
        v17 = 0LL;
        if ( RtlIsSandboxedToken(0LL, PreviousMode) )
          v13 = 20;
      }
      v14 = v13 | 8;
      if ( (a5 & 1) == 0 )
        v14 = v13;
      v15 = v14 | 0x20;
      if ( (a5 & 2) == 0 )
        v15 = v14;
      *((_DWORD *)v12 + 84) |= v15;
      inserted = ObInsertObjectEx(v12, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v20);
      v18 = 0LL;
      *a1 = v20;
    }
  }
LABEL_9:
  if ( v17 )
    ObfDereferenceObject(v17);
  if ( v18 )
    ObfDereferenceObject(v18);
  return (unsigned int)inserted;
}
