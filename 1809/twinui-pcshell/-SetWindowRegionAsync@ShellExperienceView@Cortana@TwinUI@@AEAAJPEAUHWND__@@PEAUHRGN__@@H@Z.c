/*
 * XREFs of ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x18006A898
 * Callers:
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x18006A7B0 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x18006A96C (Windows--Internal--ComTaskPool--QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(
        TwinUI::Cortana::ShellExperienceView *this,
        HWND a2,
        HRGN a3,
        int a4)
{
  HRGN v4; // rbx
  HRGN RectRgn; // rax
  __int64 v10; // r8
  int v11; // edi
  __int64 v13; // rdx
  int v14[2]; // [rsp+20h] [rbp-28h] BYREF
  HGDIOBJ ho; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  if ( a3 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    v4 = RectRgn;
    if ( RectRgn )
    {
      if ( CombineRgn(RectRgn, a3, 0LL, 5) )
        goto LABEL_4;
      v11 = -2147467259;
      v13 = 379LL;
    }
    else
    {
      v11 = -2147467259;
      v13 = 378LL;
    }
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_7;
  }
LABEL_4:
  v10 = *((unsigned int *)this + 72);
  ho = v4;
  v4 = 0LL;
  *(_QWORD *)v14 = a2;
  v16 = a4;
  v11 = ((__int64 (__fastcall *)(TwinUI::Cortana::ShellExperienceView *, __int64, __int64, int *))Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___)(
          this,
          258LL,
          v10,
          v14);
  if ( ho )
    DeleteObject(ho);
  if ( v11 < 0 )
  {
    v13 = 387LL;
    goto LABEL_13;
  }
LABEL_7:
  if ( v4 )
    DeleteObject(v4);
  return (unsigned int)v11;
}
