/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14003555C
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140034848 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140038770 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140005678 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000A0A0 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x140032A98 (WPP_SF_q.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140035774 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003A204 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003A3CC (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(CPipeInstance *this)
{
  __int64 v2; // rcx
  _QWORD **v3; // rcx
  __int64 Prev; // rax
  _QWORD *v5; // rcx
  int v6; // eax
  _QWORD *v7; // rbx
  _QWORD ***Next; // rax
  struct IAudioProcessor *v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  _QWORD *v13; // [rsp+60h] [rbp+30h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
      this,
      -2LL);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = *((_QWORD *)this + 19);
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v12) >= 0 )
      {
        v11 = *((_QWORD *)this + 3);
        while ( v11 )
        {
          Prev = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)v3, &v11);
          v3 = *(_QWORD ***)Prev;
          if ( *(_DWORD *)(*(_QWORD *)Prev + 40LL) == 2 )
          {
            v5 = v3[4];
            v13 = 0LL;
            v6 = ATL::CComPtrBase<IAudioMediaType>::CopyTo(v5 + 5, &v13);
            v7 = v13;
            if ( v6 >= 0 )
              (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD *))(**((_QWORD **)this + 19) + 64LL))(
                *((_QWORD *)this + 19),
                v12,
                v13);
            if ( v7 )
              (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
          }
        }
        v11 = *((_QWORD *)this + 8);
        while ( v11 )
        {
          Next = (_QWORD ***)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v3, &v11);
          v3 = *Next;
          v13 = **Next;
          while ( v13 )
          {
            v3 = (_QWORD **)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                               (__int64)v3,
                               &v13);
            v9 = (struct IAudioProcessor *)*((_QWORD *)this + 19);
            v10 = v12;
            *((_DWORD *)v3 + 1) = 0;
            if ( *((_DWORD *)v3 + 4) )
            {
              if ( *((_DWORD *)v3 + 4) == 1 )
                CConnectionInstance::RemoveCaptureConnection((CConnectionInstance *)v3, v9, v10);
            }
            else
            {
              CConnectionInstance::RemoveRenderConnection((CConnectionInstance *)v3, v9, v10);
            }
          }
        }
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 40LL))(
               *((_QWORD *)this + 19),
               v12) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
