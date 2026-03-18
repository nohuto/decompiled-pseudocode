/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C008C040
 * Callers:
 *     InvalidateDCE @ 0x1C00354F8 (InvalidateDCE.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00EC310 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FD94 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C023FEBC (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C023FF0C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r12
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 *v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rax
  __int64 ***v25; // rcx
  __int64 **v26; // rdx
  int v27; // r8d
  __m128 v28; // xmm0
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // eax
  _QWORD v37[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 v38; // [rsp+60h] [rbp+8h] BYREF
  int v39; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v37[1] = 0LL;
    LOBYTE(a2) = 1;
    v7 = HmgShareLockEx(v5, a2, 0LL);
    v37[0] = v7;
    v9 = v7;
    if ( !v7 )
      return v2;
    v10 = *(__int64 **)(v7 + 48);
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
    {
      v29 = *(_DWORD *)(v7 + 36);
      v30 = *(_QWORD *)(v9 + 512);
      if ( (v29 & 0x4000) != 0 )
      {
        if ( !v30 )
          v30 = **(_QWORD **)(v9 + 504);
        LOBYTE(v8) = 5;
        v32 = HmgShareLockCheck(v30, v8);
        if ( v32 )
        {
          if ( v3 )
          {
            LOBYTE(v31) = 5;
            v34 = HmgShareLockCheck(v3, v31);
            v35 = v34;
            if ( v34 )
            {
              if ( v32 != v34 )
              {
                v36 = *(_DWORD *)(v9 + 36);
                if ( (v36 & 0x40000) == 0 )
                {
                  INC_SHARE_REF_CNT(v32);
                  v36 = *(_DWORD *)(v9 + 36);
                }
                *(_DWORD *)(v9 + 36) = v36 | 0x40000;
                *(_QWORD *)(v9 + 2512) = v3;
              }
              v2 = 1;
              DEC_SHARE_REF_CNT(v35);
            }
          }
          else
          {
            v33 = *(_DWORD *)(v9 + 36);
            if ( (v33 & 0x40000) == 0 )
            {
              INC_SHARE_REF_CNT(v32);
              v33 = *(_DWORD *)(v9 + 36);
            }
            *(_DWORD *)(v9 + 36) = v33 | 0x40000;
            *(_QWORD *)(v9 + 2512) = 0LL;
            v2 = 1;
          }
          DEC_SHARE_REF_CNT(v32);
        }
      }
      else
      {
        v2 = 1;
        *(_DWORD *)(v9 + 36) = v29 | 0x40000;
        *(_QWORD *)(v9 + 2512) = v3;
      }
LABEL_66:
      if ( v9 )
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v37);
      return v2;
    }
    if ( v3 && a1 == v5 )
    {
      v19 = v10[3];
      if ( v10 != (__int64 *)v19 )
      {
        if ( v19 )
        {
          if ( (*(_DWORD *)(v19 + 40) & 0x20000) != 0 )
          {
            if ( v10 )
            {
              LOBYTE(v8) = 5;
              v24 = HmgShareLockCheck(v3, v8);
              if ( v24 )
              {
                if ( (*(_DWORD *)(v24 + 116) & 1) != 0 )
                {
                  v25 = *(__int64 ****)(v24 + 40);
                  v26 = *v25;
                  v27 = *((_DWORD *)v25 + 4);
                  while ( v26[6] != v10 )
                  {
                    v26 = (__int64 **)*v26;
                    if ( !--v27 )
                      goto LABEL_45;
                  }
                  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 24) + 8LL)
                                             + 8LL * *((unsigned int *)v26 + 4))
                                 + 8LL);
                }
LABEL_45:
                DEC_SHARE_REF_CNT(v24);
              }
            }
          }
        }
      }
      LOBYTE(v8) = 5;
      v20 = HmgShareLockCheck(v3, v8);
      v6 = v20;
      if ( !v20 )
        goto LABEL_66;
      DEC_SHARE_REF_CNT(v20);
    }
    if ( (*(_DWORD *)(v9 + 36) & 0x4000) != 0 )
    {
      v16 = *(_QWORD *)(v9 + 504);
      if ( v16 )
      {
        LOBYTE(v8) = 5;
        v17 = HmgShareLockCheck(*(_QWORD *)(v16 + 32), v8);
        v18 = v17;
        if ( v17 )
        {
          DEC_SHARE_REF_CNT(v17);
          DEC_SHARE_REF_CNT(v18);
        }
      }
    }
    if ( v3 )
    {
      LOBYTE(v8) = 5;
      v21 = HmgShareLockCheck(v3, v8);
      v22 = v21;
      if ( v21 )
        INC_SHARE_REF_CNT(v21);
      *(_DWORD *)(v9 + 36) |= 0x4000u;
      v23 = *(_DWORD *)(v6 + 112);
      if ( (v23 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v23 | 0x800;
      if ( v22 )
        DEC_SHARE_REF_CNT(v22);
    }
    else
    {
      v6 = v10[318];
      *(_DWORD *)(v9 + 36) &= ~0x4000u;
    }
    v11 = *(_DWORD *)(v9 + 36) & 0xFFFF7FFF;
    if ( (*(_DWORD *)(v6 + 112) & 0x200) != 0 )
      v11 = *(_DWORD *)(v9 + 36) | 0x8000;
    *(_DWORD *)(v9 + 36) = v11;
    *(_QWORD *)(v9 + 504) = v6;
    if ( (*(_DWORD *)(v6 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(v9, *(_QWORD *)(v6 + 660));
    }
    else
    {
      v12 = *(_QWORD *)(v9 + 472);
      if ( v12 && (unsigned int)UserIsWindowGdiScaled(v12, &v38) && v38 != 96 )
      {
        v28 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v38));
        v28.m128_f32[0] = v28.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v9, _mm_unpacklo_ps(v28, v28).m128_u64[0]);
      }
      else
      {
        v13 = *(_DWORD *)(v9 + 528);
        if ( (v13 & 1) != 0 )
        {
          *(_DWORD *)(v9 + 36) |= 0x10u;
          *(_QWORD *)(v9 + 532) = 0LL;
          *(_DWORD *)(v9 + 528) = v13 & 0xFFFFFFF8 | 4;
          *(_QWORD *)(v9 + 540) = 0LL;
          DC::vUpdateCachedDPIScaleValue((DC *)v9);
        }
      }
    }
    *(_QWORD *)(v9 + 520) = *(_QWORD *)(v6 + 56);
    *(_DWORD *)(v9 + 324) |= 0xFu;
    if ( *(int *)(v9 + 112) > 1 )
      v5 = *(_QWORD *)(v9 + 120);
    else
      v5 = 0LL;
    XDCOBJ::RestoreAttributes((XDCOBJ *)v37);
    v39 = 0;
    v14 = *(_QWORD *)v37[0];
    HmgDecrementShareReferenceCountEx(v37[0], &v39);
    if ( v39 )
      bDeleteDCInternalEx(v14, 0LL);
    if ( !v5 )
      return 1LL;
  }
}
