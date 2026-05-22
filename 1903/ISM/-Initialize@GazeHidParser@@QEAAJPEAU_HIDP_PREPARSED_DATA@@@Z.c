/*
 * XREFs of ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800F8A68
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800A67D4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059C10 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@W4GazeProperty@@G@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1800F7EF8 (--$_Buynode@W4GazeProperty@@G@-$_Tree_comp_alloc@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4Gaze.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBW4GazeProperty@@G@std@@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4GazeProperty@@G@1@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@@Z @ 0x1800F80D4 (--$_Insert_nohint@AEAU-$pair@$$CBW4GazeProperty@@G@std@@PEAU-$_Tree_node@U-$pair@$$CBW4GazePrope.c)
 *     ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x1800F83D8 (-FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z.c)
 */

__int64 __fastcall GazeHidParser::Initialize(PHIDP_CAPS Capabilities, PHIDP_PREPARSED_DATA PreparsedData)
{
  NTSTATUS Caps; // eax
  unsigned int i; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)&Capabilities[1].Usage = PreparsedData;
  Caps = HidP_GetCaps(PreparsedData, Capabilities);
  if ( Caps < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x18,
             (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
             (const char *)(unsigned int)Caps);
  for ( i = 0; i < 0xB; ++i )
  {
    v10 = 0;
    if ( (int)GazeHidParser::FindCollectionForProperty((__int64)Capabilities, i, &v10) >= 0 )
    {
      v11 = i;
      try
      {
        v6 = std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buynode<enum GazeProperty,unsigned short>(
               (__int64)&Capabilities[1].FeatureReportByteLength,
               &v11,
               &v10);
        std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Insert_nohint<std::pair<enum GazeProperty const,unsigned short> &,std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *> *>(
          (__int64 *)&Capabilities[1].FeatureReportByteLength,
          (__int64)v8,
          v7,
          (_DWORD *)(v6 + 28),
          (_QWORD *)v6);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B,
          (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
          (const char *)0x8007000ELL);
        return 2147942414LL;
      }
    }
  }
  return 0LL;
}
