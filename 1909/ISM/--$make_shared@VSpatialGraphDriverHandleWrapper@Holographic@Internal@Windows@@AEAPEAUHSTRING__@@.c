/*
 * XREFs of ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@234@AEA_NAEAPEAX@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1801508E0
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180153AE8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1801498D4 (--$-0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper,HSTRING__ * &,_GUID const &,enum Windows::Internal::Holographic::HandleWrapperDesiredAccess &,bool &,void * &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _DWORD *a4,
        char *a5,
        _QWORD *a6)
{
  __int64 v10; // rax
  void *v12; // [rsp+50h] [rbp+8h]

  v12 = operator new(0xF8uLL);
  v10 = std::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>(
          (__int64)v12,
          a2,
          a3,
          a4,
          a5,
          a6);
  *a1 = v10 + 16;
  a1[1] = v10;
  return a1;
}
