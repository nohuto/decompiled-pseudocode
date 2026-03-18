/*
 * XREFs of ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801DAFD4
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801DAD64 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x1800ACF68 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801D7A2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801D7C54 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1801D9438 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801DB370 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 */

void __fastcall CInteractionTracker::SendPendingStateChangeCallbacks(CInteractionTracker *this, char a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // r8
  __int64 v5; // r12
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 v16; // r9
  __int64 v17; // r10
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int16 v20; // cx
  CInteractionTracker *v21; // rcx
  __int128 v22; // xmm0
  unsigned int *v23; // rax
  unsigned int ChannelCallbackId; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  unsigned __int16 v30; // r9
  __int64 v31; // r10
  int v32; // eax
  int v33; // [rsp+28h] [rbp-F0h]
  __int64 v34; // [rsp+40h] [rbp-D8h]
  __int128 v35; // [rsp+98h] [rbp-80h]
  __int128 v36; // [rsp+A8h] [rbp-70h]
  __int64 v37; // [rsp+D8h] [rbp-40h] BYREF
  int v38; // [rsp+E0h] [rbp-38h]
  __int64 v39; // [rsp+E8h] [rbp-30h]
  int v40; // [rsp+F0h] [rbp-28h]
  __int64 v41; // [rsp+F8h] [rbp-20h]
  int v42; // [rsp+100h] [rbp-18h]
  __int64 v43; // [rsp+108h] [rbp-10h] BYREF
  int v44; // [rsp+110h] [rbp-8h]
  __int64 v45; // [rsp+118h] [rbp+0h] BYREF
  int v46; // [rsp+120h] [rbp+8h]
  _QWORD v47[2]; // [rsp+128h] [rbp+10h] BYREF
  _QWORD v48[2]; // [rsp+138h] [rbp+20h] BYREF
  _QWORD v49[2]; // [rsp+148h] [rbp+30h] BYREF
  _QWORD v50[2]; // [rsp+158h] [rbp+40h] BYREF
  unsigned int v51[16]; // [rsp+168h] [rbp+50h] BYREF
  const void *retaddr; // [rsp+1C0h] [rbp+A8h]

  v2 = (_QWORD *)((char *)this + 472);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 1224LL);
  v5 = *(_QWORD *)(v4 + 48);
  v6 = *((_DWORD *)this + 124) - 1;
  if ( !a2 )
    v6 = *((_DWORD *)this + 124);
  v7 = 0;
  if ( v6 )
  {
    v8 = *((_DWORD *)this + 43);
    v9 = 0LL;
    do
    {
      if ( v8 )
      {
        v10 = *(_DWORD *)(v9 + *v2 + 12);
        v37 = *(_QWORD *)(v9 + *v2 + 4);
        v38 = v10;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v37, v4, 0LL);
      }
      v11 = *(_DWORD *)(v9 + *v2);
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
              || CInteractionTracker::HasDefaultAnimations(v21) )
            {
              v23 = CInteractionTracker::CalculateInertiaCallbackValues((__int64)this, v51);
              v35 = *(_OWORD *)v23;
              v22 = *((_OWORD *)v23 + 2);
              v36 = *((_OWORD *)v23 + 1);
            }
            else
            {
              v35 = *(_OWORD *)((char *)this + 572);
              v22 = *(_OWORD *)((char *)this + 604);
              v36 = *(_OWORD *)((char *)this + 588);
            }
            v40 = DWORD2(v22);
            v39 = v22;
            v42 = DWORD2(v36);
            v41 = v36;
            v43 = v35;
            v44 = DWORD2(v35);
            ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
            v48[1] = *((unsigned int *)this + 14);
            v48[0] = ChannelCallbackId;
            LOWORD(v33) = 1;
            CoreUICallSend(v5, v48, 2LL, 8LL, v33, &unk_1802B115B, (unsigned int)&v43, *((float *)&v35 + 3));
            if ( *((_BYTE *)this + 626) )
              *((_BYTE *)this + 626) = 0;
            goto LABEL_21;
          }
          if ( v13 != 1 )
            ModuleFailFastForHRESULT(-2147024809, retaddr);
          v14 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v18 = v47;
          v19 = *((unsigned int *)this + 14);
          v47[0] = v14;
          v20 = 5;
          v47[1] = v19;
        }
        else
        {
          v25 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v18 = v49;
          v26 = *((unsigned int *)this + 14);
          v49[0] = v25;
          v20 = 4;
          v49[1] = v26;
        }
        LODWORD(v34) = *(unsigned __int8 *)(v9 + v15 + 20);
        LOWORD(v33) = v20;
        CoreUICallSend(v5, v18, 2LL, v16, v33, v17, *((_DWORD *)this + 45), v34);
      }
      else
      {
        v27 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
        v50[1] = *((unsigned int *)this + 14);
        LODWORD(v34) = *(unsigned __int8 *)(v9 + v28 + 20);
        v29 = *((_DWORD *)this + 45);
        v50[0] = v27;
        LOWORD(v33) = 3;
        CoreUICallSend(v5, v50, 2LL, v30, v33, v31, v29, v34);
        *((_DWORD *)this + 45) = 0;
      }
LABEL_21:
      if ( !*((_DWORD *)this + 43) )
      {
        v32 = *(_DWORD *)(v9 + *v2 + 12);
        v45 = *(_QWORD *)(v9 + *v2 + 4);
        v46 = v32;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v45, v4, 0LL);
      }
      ++v7;
      v8 = *(_DWORD *)(v9 + *v2);
      v9 += 24LL;
      *((_DWORD *)this + 43) = v8;
    }
    while ( v7 < v6 );
  }
  DynArray<CInteractionTracker::PendingStateChangeInfo,0>::ShiftLeft(v2, v6);
}
