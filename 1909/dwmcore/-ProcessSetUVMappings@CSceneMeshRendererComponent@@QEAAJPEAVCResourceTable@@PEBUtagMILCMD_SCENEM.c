/*
 * XREFs of ?ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS@@PEBXI@Z @ 0x1801F5F04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1801F6074 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::ProcessSetUVMappings(
        CSceneMeshRendererComponent *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  int appended; // ebx
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((unsigned int *)a3 + 3);
  if ( (_DWORD)v5 != a5 || (a5 & 7) != 0 )
  {
    appended = -2003303421;
    v8 = 160LL;
  }
  else
  {
    v6 = v5 >> 3;
    v10[0] = v6;
    v10[1] = a4;
    if ( !a4 )
    {
      if ( v6 )
      {
        ((void (__fastcall *)(CSceneMeshRendererComponent *, struct CResourceTable *))`gsl::details::get_terminate_handler'::`2'::handler)(
          this,
          a2);
        __debugbreak();
      }
    }
    LOBYTE(a3) = *((_BYTE *)a3 + 8);
    appended = CSceneMeshRendererComponent::SetOrAppendUVMappings(this, v10, a3);
    if ( appended >= 0 )
      return 0LL;
    v8 = 165LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
    (const char *)(unsigned int)appended);
  return (unsigned int)appended;
}
