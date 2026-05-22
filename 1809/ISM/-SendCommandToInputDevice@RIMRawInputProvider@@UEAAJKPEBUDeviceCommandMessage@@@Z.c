/*
 * XREFs of ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18005C930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180055580 (-erase@-$_Hash@V-$_Umap_traits@KKV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$allo.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005ED84 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x180065FF8 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x180066248 (-count@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ??$_Insert@AEBW4_Button@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@U_Not_a_node_tag@1@@Z @ 0x18006659C (--$_Insert@AEBW4_Button@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_com.c)
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x180067AE0 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x18006A5A8 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::SendCommandToInputDevice(
        HeatDeviceCollection **this,
        unsigned int a2,
        void **a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  HeatDeviceCollection *v8; // rbx
  unsigned int v9; // edi
  bool v10; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // eax
  __int64 v16; // rdx
  unsigned int *v17; // r9
  RIMDeviceCollection *v18; // rcx
  int DeviceId; // eax
  int v20; // r11d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE v24[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct RIMDevice *v26; // [rsp+80h] [rbp+30h] BYREF

  switch ( *(_DWORD *)a3 )
  {
    case 2:
      if ( RIMDeviceCollection::GetDeviceInfo(this[10], a2, &v26) >= 0 )
      {
        v6 = HeatDeviceCollection::SendHeatDeviceCommand(this[10], a2, a3[1]);
        if ( v6 < 0 )
        {
          v7 = 269LL;
          goto LABEL_33;
        }
      }
      return 0LL;
    case 3:
      if ( RIMDeviceCollection::GetDeviceInfo(this[7], a2, &v26) < 0 )
        return 0LL;
      LOBYTE(v23) = *((_BYTE *)a3 + 9);
      LOBYTE(v22) = *((_BYTE *)a3 + 8);
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _WORD, unsigned __int64))(**((_QWORD **)this[7] + 347)
                                                                                                 + 72LL))(
              *((_QWORD *)this[7] + 347),
              a2,
              v22,
              v23,
              *((_WORD *)a3 + 5),
              ((unsigned __int64)this[7] + 2760) & -(__int64)(this[7] != 0LL));
      if ( v15 >= 0 )
        return 0LL;
      v16 = 429LL;
LABEL_29:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v16,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v15);
      return 0LL;
    case 4:
      if ( RIMDeviceCollection::GetDeviceInfo(this[11], a2, &v26) < 0 )
        return 0LL;
      v18 = this[11];
      v26 = 0LL;
      DeviceId = RIMDeviceCollection::FindDeviceId(v18, a2, &v26, v17);
      v6 = DeviceId;
      if ( DeviceId >= 0 )
      {
        DeviceId = GazeHidDevice::TrySetTrackingEnabled(v26, v20 != 0);
        v6 = DeviceId;
        if ( DeviceId >= 0 )
        {
          v6 = 0;
LABEL_24:
          if ( v6 < 0 )
          {
            v7 = 302LL;
            goto LABEL_33;
          }
          return 0LL;
        }
        v21 = 243LL;
      }
      else
      {
        v21 = 240LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
        (const char *)(unsigned int)DeviceId);
      goto LABEL_24;
    case 5:
      if ( RIMDeviceCollection::GetDeviceInfo(this[7], a2, &v26) < 0 )
        return 0LL;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this[7] + 347) + 80LL))(
              *((_QWORD *)this[7] + 347),
              a2,
              ((unsigned __int64)this[7] + 2760) & -(__int64)(this[7] != 0LL));
      if ( v15 >= 0 )
        return 0LL;
      v16 = 436LL;
      goto LABEL_29;
    case 7:
      if ( RIMDeviceCollection::GetDeviceInfo(this[5], a2, &v26) >= 0 )
      {
        v8 = this[5];
        v9 = *((_DWORD *)a3 + 2);
        v10 = *((_DWORD *)a3 + 3) != 0;
        LODWORD(v26) = v9;
        v11 = std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count(
                (char *)v8 + 2824,
                &v26);
        if ( *((_DWORD *)a3 + 3) )
        {
          if ( !v11 )
          {
            LOBYTE(v12) = v10;
            MobileButtonDeviceCollection::SendIOCTLMessage(v8, v9, v12);
            LOBYTE(v13) = (_BYTE)v26;
            std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Insert<enum _Button const &,std::_Not_a_node_tag>(
              (char *)v8 + 2824,
              v24,
              &v26,
              v13);
          }
        }
        else if ( v11 )
        {
          LOBYTE(v12) = v10;
          MobileButtonDeviceCollection::SendIOCTLMessage(v8, v9, v12);
          std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
            (_QWORD *)v8 + 353,
            &v26);
        }
      }
      return 0LL;
  }
  v6 = -2147467263;
  v7 = 343LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
