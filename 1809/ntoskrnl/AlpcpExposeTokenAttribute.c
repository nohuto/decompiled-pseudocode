/*
 * XREFs of AlpcpExposeTokenAttribute @ 0x140634700
 * Callers:
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SeCreateClientSecurityEx @ 0x140632D00 (SeCreateClientSecurityEx.c)
 */

char __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, PERESOURCE *a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  PERESOURCE *v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v11; // rbx
  __int64 v12; // rcx
  PERESOURCE *v14; // [rsp+20h] [rbp-88h]
  PERESOURCE v15; // [rsp+28h] [rbp-80h]
  PERESOURCE v16; // [rsp+30h] [rbp-78h]
  char v17[16]; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+60h] [rbp-48h]
  char v19; // [rsp+B8h] [rbp+10h]

  LODWORD(v6) = *(_DWORD *)(a2 + 40);
  if ( (v6 & 0x80u) != 0LL )
    return v6;
  v6 = *(_QWORD *)(a2 + 136);
  if ( v6 )
  {
    if ( *(int *)(v6 + 36) < 1 )
      return v6;
    v9 = *(PERESOURCE **)(v6 + 48);
    v14 = v9;
    v19 = 0;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    LOBYTE(v6) = *(_DWORD *)(a1 + 416) & 6;
    if ( (_BYTE)v6 != 2 )
      return v6;
    if ( !v7 )
      return v6;
    v8 = *(_DWORD *)(v7 + 416);
    LOBYTE(v6) = v8 & 6;
    if ( (v8 & 6) != 4 )
      return v6;
    if ( (v8 & 0x400) == 0 )
    {
      v9 = *(PERESOURCE **)(v7 + 80);
      if ( !v9 )
        return v6;
      v14 = *(PERESOURCE **)(v7 + 80);
      LODWORD(v6) = 0;
      goto LABEL_9;
    }
    v12 = *(_QWORD *)(a2 + 32);
    if ( !v12 )
      return v6;
    LODWORD(v6) = SeCreateClientSecurityEx(v12, (int)v7 + 260, 0, (__int64)v17);
    if ( (int)v6 < 0 )
    {
      v9 = v14;
LABEL_9:
      v19 = 0;
      if ( (int)v6 < 0 )
        return v6;
      goto LABEL_10;
    }
    v9 = (PERESOURCE *)Object;
    v14 = (PERESOURCE *)Object;
    v19 = 1;
  }
LABEL_10:
  v16 = v9[3];
  v15 = v9[2];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v14[6], 1u);
  v11 = v14[7];
  ExReleaseResourceLite(v14[6]);
  KeLeaveCriticalRegion();
  if ( v19 )
    ObfDereferenceObject(Object);
  *a3 = v15;
  LOBYTE(v6) = (_BYTE)v16;
  a3[1] = v16;
  a3[2] = v11;
  *a4 |= 0x8000000u;
  return v6;
}
