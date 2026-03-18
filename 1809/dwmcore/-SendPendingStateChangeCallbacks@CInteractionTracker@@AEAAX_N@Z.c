/*
 * XREFs of ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801A1A44
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x1801A17EC (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180055090 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18019E6E0 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x18019FE04 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1801A1DA4 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CInteractionTracker::SendPendingStateChangeCallbacks(CInteractionTracker *this, char a2)
{
  __int64 *v2; // r14
  __int64 v4; // r12
  unsigned int v5; // esi
  unsigned int v6; // r15d
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  unsigned __int16 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int16 v19; // cx
  CInteractionTracker *v20; // rcx
  __int128 v21; // xmm0
  unsigned int *v22; // rax
  unsigned int ChannelCallbackId; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int16 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int128 v32; // [rsp+88h] [rbp-80h]
  __int128 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+C8h] [rbp-40h] BYREF
  int v35; // [rsp+D0h] [rbp-38h]
  __int64 v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  __int64 v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  __int64 v40; // [rsp+F8h] [rbp-10h]
  int v41; // [rsp+100h] [rbp-8h]
  __int64 v42; // [rsp+108h] [rbp+0h] BYREF
  int v43; // [rsp+110h] [rbp+8h]
  _QWORD v44[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v45[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v46[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v47[2]; // [rsp+148h] [rbp+40h] BYREF
  unsigned int v48[16]; // [rsp+158h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1B0h] [rbp+A8h]

  v2 = (__int64 *)((char *)this + 472);
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1208LL) + 56LL);
  v5 = *((_DWORD *)this + 124) - 1;
  if ( !a2 )
    v5 = *((_DWORD *)this + 124);
  v6 = 0;
  if ( v5 )
  {
    v7 = *((_DWORD *)this + 43);
    v8 = 0LL;
    v9 = *v2;
    do
    {
      if ( v7 )
      {
        v10 = *(_DWORD *)(v8 + v9 + 12);
        v34 = *(_QWORD *)(v8 + v9 + 4);
        v35 = v10;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v34, 8LL, 0LL);
        v9 = *v2;
      }
      v11 = *(_DWORD *)(v8 + v9);
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
              || CInteractionTracker::HasDefaultAnimations(v20) )
            {
              v22 = CInteractionTracker::CalculateInertiaCallbackValues((__int64)this, v48);
              v32 = *(_OWORD *)v22;
              v21 = *((_OWORD *)v22 + 2);
              v33 = *((_OWORD *)v22 + 1);
            }
            else
            {
              v32 = *(_OWORD *)((char *)this + 572);
              v21 = *(_OWORD *)((char *)this + 604);
              v33 = *(_OWORD *)((char *)this + 588);
            }
            v37 = DWORD2(v21);
            v36 = v21;
            v39 = DWORD2(v33);
            v38 = v33;
            v40 = v32;
            v41 = DWORD2(v32);
            ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
            v45[1] = *((unsigned int *)this + 14);
            v45[0] = ChannelCallbackId;
            CoreUICallSend(v4, v45, 2LL, 8LL, 1, &unk_1802763EB);
            goto LABEL_20;
          }
          if ( v13 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v14 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v17 = v44;
          v18 = *((unsigned int *)this + 14);
          v44[0] = v14;
          v19 = 5;
          v44[1] = v18;
        }
        else
        {
          v25 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v17 = v46;
          v26 = *((unsigned int *)this + 14);
          v46[0] = v25;
          v19 = 4;
          v46[1] = v26;
        }
        CoreUICallSend(v4, v17, 2LL, v15, v19, v16);
      }
      else
      {
        v27 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
        v28 = *((unsigned int *)this + 14);
        v47[0] = v27;
        v47[1] = v28;
        CoreUICallSend(v4, v47, 2LL, v29, 3, v30);
        *((_DWORD *)this + 45) = 0;
      }
LABEL_20:
      if ( !*((_DWORD *)this + 43) )
      {
        v31 = *(_DWORD *)(*v2 + v8 + 12);
        v42 = *(_QWORD *)(*v2 + v8 + 4);
        v43 = v31;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v42, v24, 0LL);
      }
      v9 = *v2;
      ++v6;
      v7 = *(_DWORD *)(v8 + *v2);
      v8 += 20LL;
      *((_DWORD *)this + 43) = v7;
    }
    while ( v6 < v5 );
  }
  DynArray<CInteractionTracker::PendingStateChangeInfo,0>::ShiftLeft(v2, v5);
}
