/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000EF20
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000BC60 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F2B0 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003DF78 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(struct IAudioProcessor **this)
{
  struct IAudioProcessor *v2; // rcx
  struct IAudioProcessor *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct IAudioProcessor *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  struct IAudioProcessor *v10; // r15
  unsigned __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h]
  unsigned __int64 v23; // [rsp+90h] [rbp+18h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, this);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = this[18];
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v23) >= 0 )
      {
        v3 = this[3];
        while ( v3 )
        {
          v4 = *((_QWORD *)v3 + 2);
          v3 = (struct IAudioProcessor *)*((_QWORD *)v3 + 1);
          if ( *(_DWORD *)(v4 + 40) == 2 )
          {
            v5 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
            v21 = v5;
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
            (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)this[18] + 64LL))(
              this[18],
              v23,
              v5);
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        v6 = this[8];
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = (_QWORD *)*((_QWORD *)v6 + 2);
            v6 = *(struct IAudioProcessor **)v6;
            v8 = (_QWORD *)*v7;
            if ( v8 )
              break;
LABEL_33:
            if ( !v6 )
              goto LABEL_34;
          }
          while ( 1 )
          {
            v9 = v8[2];
            v8 = (_QWORD *)*v8;
            v10 = this[18];
            v11 = v23;
            *(_DWORD *)(v9 + 4) = 0;
            v12 = *(_DWORD *)(v9 + 16);
            if ( v12 )
            {
              if ( v12 == 1 )
                CConnectionInstance::RemoveCaptureConnection((CConnectionInstance *)v9, v10, v11);
              goto LABEL_32;
            }
            v22 = 0LL;
            v21 = 0LL;
            v13 = *(_QWORD *)(v9 + 32);
            if ( !v13 )
              goto LABEL_23;
            v14 = *(_DWORD *)(v13 + 40);
            if ( v14 == 2 )
              break;
            if ( ((v14 - 1) & 0xFFFFFFFD) == 0 )
            {
              if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v13 + 32))(
                     **(_QWORD **)(v13 + 32),
                     &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                     &v21) < 0 )
                goto LABEL_30;
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)v10 + 120LL))(
                v10,
                v11,
                v21);
              v16 = v21;
              if ( v21 )
              {
                v21 = 0LL;
LABEL_22:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              }
            }
LABEL_23:
            v17 = *(_QWORD *)(v9 + 24);
            if ( !v17 )
              goto LABEL_30;
            v18 = *(_DWORD *)(v17 + 40);
            if ( v18 == 2 )
            {
              v19 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 40LL);
              v22 = v19;
              if ( v19 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64, _QWORD))(*(_QWORD *)v10 + 96LL))(
                v10,
                v11,
                v19,
                *(_QWORD *)(v9 + 8));
              v20 = v19;
              if ( !v19 )
                goto LABEL_30;
              v22 = 0LL;
              goto LABEL_29;
            }
            if ( ((v18 - 1) & 0xFFFFFFFD) == 0
              && (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v17 + 32))(
                   **(_QWORD **)(v17 + 32),
                   &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                   &v21) >= 0 )
            {
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)v10 + 120LL))(
                v10,
                v11,
                v21);
              v20 = v21;
              if ( v21 )
              {
                v21 = 0LL;
LABEL_29:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
              }
            }
LABEL_30:
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
LABEL_32:
            if ( !v8 )
              goto LABEL_33;
          }
          v15 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 40LL);
          v22 = v15;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64, _QWORD))(*(_QWORD *)v10 + 80LL))(
            v10,
            v11,
            v15,
            *(_QWORD *)(v9 + 8));
          v16 = v15;
          if ( !v15 )
            goto LABEL_23;
          v22 = 0LL;
          goto LABEL_22;
        }
LABEL_34:
        if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64))(*(_QWORD *)this[18] + 40LL))(
               this[18],
               v23) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
