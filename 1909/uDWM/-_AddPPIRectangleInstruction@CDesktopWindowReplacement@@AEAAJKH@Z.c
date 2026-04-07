/*
 * XREFs of ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z @ 0x18008016C
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180028B2C (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180002564 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002FE4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077E60 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopWindowReplacement::_AddPPIRectangleInstruction(CDesktopWindowReplacement *this)
{
  int SystemMetrics; // ebx
  const char *v3; // r9
  unsigned int LastError; // ebx
  int v5; // eax
  __int64 v6; // rdx
  struct CSolidRectangleInstruction *v7; // rdx
  __int128 v8; // xmm1
  struct CSolidRectangleInstruction *v10; // [rsp+20h] [rbp-30h] BYREF
  __int128 v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v10 = 0LL;
  *(float *)&v12 = (float)(GetSystemMetrics(76) + 10);
  *((float *)&v12 + 2) = *(float *)&v12 + 4.0;
  SystemMetrics = GetSystemMetrics(79);
  if ( SystemMetrics )
  {
    *(_QWORD *)&v11 = 0x3F8000003F800000LL;
    *((_QWORD *)&v11 + 1) = 0x3F8000003F800000LL;
    *((float *)&v12 + 1) = (float)(SystemMetrics + GetSystemMetrics(77) - 14);
    *((float *)&v12 + 3) = *((float *)&v12 + 1) + 4.0;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
    v5 = CSolidRectangleInstruction::Create(&v10);
    LastError = v5;
    if ( v5 >= 0 )
    {
      v7 = v10;
      v8 = v11;
      *((_OWORD *)v10 + 2) = v12;
      *((_OWORD *)v7 + 1) = v8;
      v5 = CRenderDataVisual::AddInstruction(this, v7);
      LastError = v5;
      if ( v5 >= 0 )
      {
        LastError = 0;
        goto LABEL_9;
      }
      v6 = 111LL;
    }
    else
    {
      v6 = 108LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x61,
                  (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
                  v3);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
  return LastError;
}
