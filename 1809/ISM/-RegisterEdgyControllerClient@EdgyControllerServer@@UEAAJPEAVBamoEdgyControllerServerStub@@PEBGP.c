/*
 * XREFs of ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x1800283E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180027824 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1800CB158 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800CB318 (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x1800CB3E8 (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x1800CB458 (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800CB4C0 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800CB530 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall EdgyControllerServer::RegisterEdgyControllerClient(
        EdgyControllerServer *this,
        struct BamoEdgyControllerServerStub *a2,
        unsigned __int16 *a3,
        struct BamoEdgyControllerClientProxy *a4)
{
  Edges *v7; // rbp
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rbx
  DWORD CurrentThreadId; // eax
  const char *v12; // r9
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rbx
  DWORD v16; // eax
  const char *v17; // r9
  __int64 v18; // rbx
  DWORD v19; // eax
  const char *v20; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v23; // [rsp+30h] [rbp+8h] BYREF

  std::wstring::operator=((_QWORD *)a4 + 10, a3);
  v7 = (Edges *)(*((_QWORD *)this + 7) + 72LL);
  v8 = Edges::AddOrUpdate(v7, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 4) + 24LL) + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v10 + 136) != CurrentThreadId && *(_DWORD *)(v10 + 24) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x592,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v12);
    __debugbreak();
  }
  Edges::OnControllerGestureDirectionChanged(v7, a4, (const struct D2D_VECTOR_2F *)a4 + 8);
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v23,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)a4 + 4) + 24LL));
  v13 = *((_DWORD *)a4 + 18);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v23);
  Edges::OnControllerRoutingChanged(v7, a4, v13);
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v23,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)a4 + 4) + 24LL));
  v14 = *((_DWORD *)a4 + 19);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v23);
  Edges::OnControllerRunStateChanged(v7, a4, v14);
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 4) + 24LL) + 24LL);
  v16 = GetCurrentThreadId();
  if ( *(_DWORD *)(v15 + 136) != v16 && *(_DWORD *)(v15 + 24) != v16 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x592,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v17);
    JUMPOUT(0x18002858ALL);
  }
  Edges::OnControllerVertex0Changed(v7, a4, (const struct D2D_VECTOR_2F *)a4 + 6);
  v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 4) + 24LL) + 24LL);
  v19 = GetCurrentThreadId();
  if ( *(_DWORD *)(v18 + 136) != v19 && *(_DWORD *)(v18 + 24) != v19 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x592,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v20);
    __debugbreak();
  }
  Edges::OnControllerVertex1Changed(v7, a4, (const struct D2D_VECTOR_2F *)a4 + 7);
  return v9;
}
