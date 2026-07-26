/*
 * XREFs of ndisOidPrePDQueryConfig @ 0x1C007CFC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qdd @ 0x1C007C620 (WPP_SF_qdd_ea_1C007C620.c)
 *     WPP_SF_qqqqDd @ 0x1C007CBAC (WPP_SF_qqqqDd.c)
 *     WPP_SF_qqqqq @ 0x1C007CC9C (WPP_SF_qqqqq.c)
 */

unsigned __int8 __fastcall ndisOidPrePDQueryConfig(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  KIRQL v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v6 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    WPP_SF_qqqqq(0x43u, a2, v2, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 24), v4);
    v6 = *(_QWORD *)a1;
  }
  if ( v6 )
  {
    v7 = *(_QWORD *)(v2 + 5536);
    if ( !*(_DWORD *)(v4 + 4) )
    {
      if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 && (*(_BYTE *)(v4 + 1) < 2u || *(_WORD *)(v4 + 2) < 0xF8u)
        || (*(_DWORD *)(v4 + 244) & 1) == 0
        || *(_DWORD *)(v4 + 236)
        || *(_DWORD *)(v4 + 240) != -1 )
      {
        *(_DWORD *)(a1 + 40) = -1073741811;
        goto LABEL_21;
      }
      if ( v7 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
        *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v2 + 1864) = 4002939;
        v9 = *(_DWORD *)(v7 + 32);
        if ( v9 )
        {
          if ( *(_DWORD *)(v4 + 48) >= v9 )
          {
            memmove(*(void **)(v4 + 40), *(const void **)(v7 + 24), *(unsigned int *)(v7 + 32));
            *(_DWORD *)(v4 + 52) = *(_DWORD *)(v7 + 32);
            if ( (unsigned __int8)byte_1C00A026C >= 4u )
            {
              v11 = *(_QWORD *)(v7 + 24);
              LODWORD(v13) = *(_DWORD *)(v11 + 16);
              WPP_SF_qdd(0x44u, v10, v2, *(unsigned __int8 *)(v11 + 8), v13);
            }
            *(_QWORD *)(v2 + 520) = 0LL;
            *(_DWORD *)(v2 + 1864) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v8);
            *(_DWORD *)(a1 + 40) = 0;
          }
          else
          {
            *(_QWORD *)(v2 + 520) = 0LL;
            *(_DWORD *)(v2 + 1864) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v8);
            *(_DWORD *)(v4 + 56) = *(_DWORD *)(v7 + 32);
            *(_DWORD *)(a1 + 40) = -1073676266;
          }
          goto LABEL_21;
        }
        *(_QWORD *)(v2 + 520) = 0LL;
        *(_DWORD *)(v2 + 1864) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v8);
      }
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_21:
    v5 = 1;
  }
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    v15 = *(_DWORD *)(a1 + 40);
    LODWORD(v14) = v5;
    WPP_SF_qqqqDd(
      0x45u,
      *(_QWORD *)(a1 + 8),
      v2,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v14,
      v15);
  }
  return v5;
}
