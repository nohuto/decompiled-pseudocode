/*
 * XREFs of NtDCompositionGetDeletedResources @ 0x1C0091D00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000F2C4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetDeletedResources(unsigned int a1, unsigned int a2, void *a3, unsigned int *a4)
{
  unsigned int *v4; // r15
  void *v5; // r12
  __int64 v6; // r13
  int v8; // esi
  struct DirectComposition::CApplicationChannel *v9; // rdi
  unsigned int v10; // r14d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int v13; // r15d
  _BYTE *v14; // r12
  unsigned int v15; // ecx
  __int64 v16; // rbx
  ULONG64 v17; // rcx
  struct DirectComposition::CApplicationChannel *v19; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-A0h]
  unsigned int *v21; // [rsp+30h] [rbp-98h]
  void *v22; // [rsp+38h] [rbp-90h]
  _BYTE Src[64]; // [rsp+40h] [rbp-88h] BYREF

  v4 = a4;
  v21 = a4;
  v5 = a3;
  v22 = a3;
  v6 = a2;
  v8 = 0;
  v19 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( (unsigned int)(v6 - 1) > 7 || !v5 || !v4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v19);
    v9 = v19;
    if ( v8 >= 0 )
    {
      v10 = *((_DWORD *)v19 + 129);
      if ( v10 >= (unsigned int)v6 )
        v10 = v6;
      v20 = v10;
      if ( v10 )
      {
        v11 = *((_QWORD *)v19 + 62);
        LODWORD(v12) = *((_DWORD *)v19 + 128);
        v13 = v10;
        v14 = Src;
        do
        {
          v15 = v11 - v12;
          v16 = v13;
          if ( v13 >= v15 )
            v16 = v15;
          memmove(
            v14,
            (const void *)(*((_QWORD *)v9 + 59) + (unsigned int)v12 * *((_QWORD *)v9 + 63)),
            *((_QWORD *)v9 + 63) * (unsigned int)v16);
          v11 = *((_QWORD *)v9 + 62);
          v12 = (unsigned int)(v16 + *((_DWORD *)v9 + 128)) % v11;
          *((_DWORD *)v9 + 128) = v12;
          *((_DWORD *)v9 + 129) -= v16;
          v14 += 8 * v16;
          v13 -= v16;
        }
        while ( v13 );
        v4 = v21;
        v5 = v22;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v9)(v9);
      v17 = (ULONG64)v5 + 8 * v6;
      if ( v17 > MmUserProbeAddress || v17 <= (unsigned __int64)v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, Src, 8 * v6);
      if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v4 = v10;
    }
  }
  return (unsigned int)v8;
}
