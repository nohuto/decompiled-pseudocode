/*
 * XREFs of ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C0008BC4
 * Callers:
 *     ?NotifyTokenCompleted@CompositionSurfaceObject@@QEAAJAEBVCFlipToken@@@Z @ 0x1C0008B64 (-NotifyTokenCompleted@CompositionSurfaceObject@@QEAAJAEBVCFlipToken@@@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000A2E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C001A4CC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C00555C0 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C005581C (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z @ 0x1C00561D8 (-InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z.c)
 */

int __fastcall CCompositionSurface::NotifyTokenCompleted(CCompositionSurface *this, const struct CFlipToken *a2)
{
  int result; // eax
  CFlipExBuffer *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned __int64 v17; // r8
  __int128 v18; // xmm1
  struct CCompositionBuffer *v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  struct CCompositionBuffer *v23; // [rsp+30h] [rbp-1F8h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-1F0h] BYREF
  _BYTE v25[464]; // [rsp+40h] [rbp-1E8h] BYREF

  result = 0;
  if ( *((_QWORD *)this + 12) )
  {
    result = CCompositionSurface::FindBuffer(this, *((_QWORD *)a2 + 5), &v23);
    if ( result >= 0 )
    {
      v5 = CFlipExBuffer::FromBuffer(v23);
      result = CFlipExBuffer::InsertCascadedTokenWait(v5, (unsigned __int64 *)&v23, &v24);
      if ( result >= 0 )
      {
LABEL_10:
        v7 = 3LL;
        v8 = (_OWORD *)((char *)a2 + 104);
        v9 = v25;
        do
        {
          v10 = v8[1];
          *v9 = *v8;
          v11 = v8[2];
          v9[1] = v10;
          v12 = v8[3];
          v9[2] = v11;
          v13 = v8[4];
          v9[3] = v12;
          v14 = v8[5];
          v9[4] = v13;
          v15 = v8[6];
          v9[5] = v14;
          v16 = v8[7];
          v8 += 8;
          v9[6] = v15;
          v9 += 8;
          *(v9 - 1) = v16;
          --v7;
        }
        while ( v7 );
        v17 = v24;
        v18 = v8[1];
        v19 = v23;
        *v9 = *v8;
        v20 = v8[2];
        v9[1] = v18;
        v21 = v8[3];
        v22 = *((_DWORD *)v8 + 16);
        v9[2] = v20;
        v9[3] = v21;
        *((_DWORD *)v9 + 16) = v22;
        return (*(__int64 (__fastcall **)(_QWORD, struct CCompositionBuffer *, unsigned __int64, _BYTE *))(**((_QWORD **)this + 12) + 32LL))(
                 *((_QWORD *)this + 12),
                 v19,
                 v17,
                 v25);
      }
      if ( result != -1073741267 )
      {
LABEL_9:
        if ( result < 0 )
          return result;
        goto LABEL_10;
      }
      CFlipExBuffer::DisableCascadedSignaling(v5);
      LOBYTE(v6) = 1;
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 24LL))(
                 *((_QWORD *)this + 12),
                 v6);
      if ( result >= 0 )
      {
        result = CCompositionSurface::PairBind(this, v5);
        if ( result >= 0 )
        {
          result = CFlipExBuffer::InsertCascadedTokenWait(v5, (unsigned __int64 *)&v23, &v24);
          goto LABEL_9;
        }
      }
    }
  }
  return result;
}
