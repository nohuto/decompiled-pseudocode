/*
 * XREFs of AlpcpExposeTokenAttribute @ 0x1405DFC60
 * Callers:
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCreateClientSecurityEx @ 0x1405DDE10 (SeCreateClientSecurityEx.c)
 */

char __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, PERESOURCE *a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  PERESOURCE *v11; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v13; // rbx
  __int64 v14; // rcx
  PERESOURCE *v16; // [rsp+20h] [rbp-88h]
  PERESOURCE v17; // [rsp+28h] [rbp-80h]
  PERESOURCE v18; // [rsp+30h] [rbp-78h]
  PVOID v19[10]; // [rsp+50h] [rbp-58h] BYREF
  char v20; // [rsp+B8h] [rbp+10h]

  memset(v19, 0, 0x48uLL);
  LODWORD(v8) = *(_DWORD *)(a2 + 40);
  if ( (v8 & 0x80u) != 0LL )
    return v8;
  v8 = *(_QWORD *)(a2 + 136);
  if ( v8 )
  {
    if ( *(int *)(v8 + 36) < 1 )
      return v8;
    v11 = *(PERESOURCE **)(v8 + 48);
    v16 = v11;
    v20 = 0;
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 24);
    LOBYTE(v8) = *(_DWORD *)(a1 + 416) & 6;
    if ( (_BYTE)v8 != 2 )
      return v8;
    if ( !v9 )
      return v8;
    v10 = *(_DWORD *)(v9 + 416);
    LOBYTE(v8) = v10 & 6;
    if ( (v10 & 6) != 4 )
      return v8;
    if ( (v10 & 0x400) == 0 )
    {
      v11 = *(PERESOURCE **)(v9 + 80);
      if ( !v11 )
        return v8;
      v16 = *(PERESOURCE **)(v9 + 80);
      LODWORD(v8) = 0;
      goto LABEL_9;
    }
    v14 = *(_QWORD *)(a2 + 32);
    if ( !v14 )
      return v8;
    LODWORD(v8) = SeCreateClientSecurityEx(v14, (int)v9 + 260, 0, (__int64)v19);
    if ( (int)v8 < 0 )
    {
      v11 = v16;
LABEL_9:
      v20 = 0;
      if ( (int)v8 < 0 )
        return v8;
      goto LABEL_10;
    }
    v11 = (PERESOURCE *)v19[2];
    v16 = (PERESOURCE *)v19[2];
    v20 = 1;
  }
LABEL_10:
  v18 = v11[3];
  v17 = v11[2];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v16[6], 1u);
  v13 = v16[7];
  ExReleaseResourceLite(v16[6]);
  KeLeaveCriticalRegion();
  if ( v20 )
    ObfDereferenceObject(v19[2]);
  *a3 = v17;
  LOBYTE(v8) = (_BYTE)v18;
  a3[1] = v18;
  a3[2] = v13;
  *a4 |= 0x8000000u;
  return v8;
}
