/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0061CF0
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C005F604 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00018C0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C0001E6C (VidSchSubmitDeviceCommand.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pu @ 0x1C0026A5C (McTemplateK0pu.c)
 *     VidSchFlushDevice @ 0x1C007AD00 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  char v5; // bl
  __int64 v6; // r15
  __int64 v8; // rsi
  __int64 v9; // rcx
  char v10; // r13
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  VIDMM_GLOBAL *v16; // rcx
  VIDMM_GLOBAL **v17; // rdx
  bool v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGFASTMUTEX *v21; // rcx
  _QWORD *v22; // r13
  _QWORD *v23; // r15
  _QWORD *v24; // rbx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 **v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  signed __int16 v45; // [rsp+38h] [rbp-89h]
  int v46; // [rsp+38h] [rbp-89h]
  _QWORD *v47; // [rsp+40h] [rbp-81h]
  char v48[8]; // [rsp+58h] [rbp-69h] BYREF
  char *v49; // [rsp+60h] [rbp-61h]
  int v50; // [rsp+68h] [rbp-59h]
  _QWORD v51[16]; // [rsp+78h] [rbp-49h] BYREF
  bool v52; // [rsp+130h] [rbp+6Fh]

  v5 = (char)a4.0;
  v6 = a3;
  v8 = **a2;
  v9 = **(unsigned int **)(v8 + 504);
  if ( (v9 & 0x40000000) != 0 || (v10 = 0, (int)v9 < 0) )
  {
    v35 = WdLogNewEntry5_WdWarning(v9, a2);
    goto LABEL_55;
  }
  if ( *(_DWORD *)(v8 + 344) )
  {
    if ( (*((_BYTE *)this + 40872) & 4) == 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v9, a2);
      *(_QWORD *)(v34 + 24) = a2;
      WdLogEvent5_WdWarning(v34);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
        return 3221225485LL;
    }
  }
  switch ( (_DWORD)v6 )
  {
    case 1:
      v11 = 1;
      break;
    case 2:
      v11 = 2;
      break;
    case 3:
      v11 = 3;
      break;
    case 4:
      v11 = *(_DWORD *)(v8 + 376) < 0xA0000000 ? 2 : 4;
      break;
    default:
      v35 = WdLogNewEntry5_WdWarning((unsigned int)(v6 - 3), 1LL);
      *(_QWORD *)(v35 + 32) = v6;
LABEL_55:
      *(_QWORD *)(v35 + 24) = a2;
      WdLogEvent5_WdWarning(v35);
      return 3221225485LL;
  }
  *(_DWORD *)(v8 + 432) = v11;
  v12 = 0;
  _InterlockedAdd((volatile signed __int32 *)a2[12] + 2, 1u);
  v52 = 0;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 320));
  v45 = _InterlockedCompareExchange16((volatile signed __int16 *)a2[12] + 2, 1, 0);
  if ( !v45 && ((v5 & 2) != 0 || dword_1C004D424) && (*((_BYTE *)this + 40872) & 4) == 0 )
  {
    v36 = *(_QWORD *)(v8 + 104);
    v10 = 1;
    *(_DWORD *)(v8 + 92) |= 2u;
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) + 32LL) + 352LL),
      *(_QWORD *)(v8 + 8));
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 32LL) + 344LL),
      1uLL);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320));
  v49 = (char *)this + 39952;
  if ( this != (VIDMM_GLOBAL *)-39952LL && *((struct _KTHREAD **)this + 4995) == KeGetCurrentThread() )
  {
    v37 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v37 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v37);
  }
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39952));
  v50 = 2;
  if ( v45 )
    goto LABEL_16;
  v15 = (_QWORD *)((char *)this + 39936);
  v16 = (VIDMM_GLOBAL *)(v8 + 400);
  v17 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4993);
  v18 = *v15 == (_QWORD)v15;
  v52 = v18;
  if ( *v17 != (VIDMM_GLOBAL *)((char *)this + 39936) )
    goto LABEL_51;
  *(_QWORD *)v16 = v15;
  *(_QWORD *)(v8 + 408) = v17;
  *v17 = v16;
  *((_QWORD *)this + 4993) = v16;
  *(_QWORD *)(v8 + 440) = *((_QWORD *)this + 576);
  if ( v10 )
  {
    v38 = (__int64 *)(v8 + 416);
    v39 = *(unsigned int *)(*((_QWORD *)this + 3) + 208LL);
    v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 16LL) + 8 * v39) + 416LL;
    v41 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 16LL) + 8 * v39) + 424LL);
    if ( *v41 == (__int64 *)v40 )
    {
      *v38 = v40;
      *(_QWORD *)(v8 + 424) = v41;
      *v41 = v38;
      *(_QWORD *)(v40 + 8) = v38;
      v52 = v18;
      goto LABEL_16;
    }
LABEL_51:
    __fastfail(3u);
  }
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
  if ( v45 )
  {
    v44 = WdLogNewEntry5_WdWarning(v20, v19);
    *(_QWORD *)(v44 + 24) = a2;
    *(_QWORD *)(v44 + 32) = *((unsigned __int16 *)a2[12] + 2);
    WdLogEvent5_WdWarning(v44);
    v12 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v8 + 504) & 0x20000000) != 0 )
    {
      if ( (v5 & 2) != 0 || dword_1C004D424 )
      {
        v42 = *(_QWORD *)(v8 + 8);
        ++*((_DWORD *)this + 1960);
        *((_QWORD *)this + 981) += v42;
      }
      v33 = *(_QWORD *)(v8 + 8);
      ++*((_DWORD *)this + 1956);
      *((_QWORD *)this + 979) += v33;
    }
    *((_QWORD *)this + 977) += *(_QWORD *)(v8 + 8);
    ++*((_DWORD *)this + 1952);
    if ( (v5 & 1) == 0 )
    {
      memset(v51, 0, sizeof(v51));
      v21 = *(DXGFASTMUTEX **)(v8 + 320);
      v51[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v51[5]) = 3;
      LODWORD(v51[0]) = 1;
      DXGFASTMUTEX::Acquire(v21);
      v22 = (_QWORD *)(v8 + 296);
      v23 = *(_QWORD **)(v8 + 296);
      if ( v23 != (_QWORD *)(v8 + 296) )
      {
        do
        {
          v24 = (_QWORD *)*(v23 - 2);
          if ( v24 != v23 - 2 )
          {
            do
            {
              v25 = v24 - 5;
              if ( (*(_DWORD *)(v24 - 1) & 1) == 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v25[12] + 8LL));
                v26 = v25[1];
                v51[6] = v24 - 5;
                v47 = *(_QWORD **)(v26 + 32);
                v46 = VidSchSubmitDeviceCommand(v47, (__int64)v51);
                if ( v46 < 0 )
                {
                  v43 = WdLogNewEntry5_WdWarning(v28, v27);
                  *(_QWORD *)(v43 + 24) = v46;
                  WdLogEvent5_WdWarning(v43);
                  VidSchFlushDevice((int)v47);
                  LODWORD(v51[0]) = 0;
                  VidSchSubmitDeviceCommand(v47, (__int64)v51);
                }
              }
              v24 = (_QWORD *)*v24;
            }
            while ( v24 != v23 - 2 );
            v22 = (_QWORD *)(v8 + 296);
          }
          v23 = (_QWORD *)*v23;
        }
        while ( v23 != v22 );
        v12 = 0;
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320));
    }
    if ( v52 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(a2);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LOBYTE(v30) = *(_BYTE *)(v8 + 432);
      McTemplateK0pu(v30, v29, v31, a2, v30);
    }
  }
  return v12;
}
