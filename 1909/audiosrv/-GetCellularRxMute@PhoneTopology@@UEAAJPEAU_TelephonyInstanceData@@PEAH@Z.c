/*
 * XREFs of ?GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180147E50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x18014847C (-GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1801486C8 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneTopology::GetCellularRxMute(PhoneTopology *this, struct _TelephonyInstanceData *a2, int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  int v9; // eax
  _QWORD *v10; // rax
  char v11; // al
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v14; // [rsp+30h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF
  _QWORD *v17; // [rsp+98h] [rbp+58h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = 0;
  v7 = 0LL;
  v16 = 0LL;
  v8 = 0LL;
  v17 = 0LL;
  v15 = 0;
  if ( !a2 || !a3 )
  {
    v6 = -2147467261;
    goto LABEL_19;
  }
  if ( *(int *)a2 >= 3 )
    goto LABEL_5;
  v9 = (*(__int64 (__fastcall **)(PhoneTopology *, struct _TelephonyInstanceData *, int *))(*(_QWORD *)this + 96LL))(
         this,
         a2,
         &v15);
  if ( v9 < 0 )
    goto LABEL_7;
  if ( !v15 )
    goto LABEL_5;
  v10 = operator new(0x438uLL);
  v8 = v10;
  v17 = v10;
  if ( v10 )
  {
    *v10 = &PhoneTopologyWorkItem::`vftable';
    v10[1] = *(_QWORD *)a2;
    *((_DWORD *)v10 + 4) = 0;
    *((_DWORD *)v10 + 5) = 0;
    *((_DWORD *)v10 + 268) = 2;
    memset_0(v10 + 3, 0, 0x418uLL);
    *v8 = &CallHoldWorkItem::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  v17 = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
    goto LABEL_19;
  }
  if ( (unsigned int)PhoneTopology::GetNewestWorkItem(this, (struct PhoneTopologyWorkItem *)v8) )
  {
    *a3 = *((_DWORD *)v8 + 4);
    goto LABEL_19;
  }
  v11 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
          (char *)this + 184,
          *((unsigned int *)a2 + 1),
          &v16);
  v7 = v16;
  if ( !v11 )
  {
LABEL_5:
    v6 = -2147024809;
    goto LABEL_19;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 40LL))(v16, a3);
  if ( v9 < 0 )
LABEL_7:
    v6 = v9;
LABEL_19:
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 8LL))(v8, 1LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
