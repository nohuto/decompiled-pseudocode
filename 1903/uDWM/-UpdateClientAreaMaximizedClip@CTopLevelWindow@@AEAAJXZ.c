/*
 * XREFs of ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180038A2C
 * Callers:
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180014E34 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D9C0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001E250 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x180038B90 (-SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floorf_0 @ 0x18004FD86 (floorf_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaMaximizedClip(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  int v8; // eax
  void *v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 59) )
  {
    v3 = *((_QWORD *)this + 90);
    v4 = *(float *)(v3 + 172);
    v5 = *(float *)(v3 + 176);
    v11 = *(_OWORD *)((char *)this + 636);
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v4 - 1.0)) & _xmm);
    if ( v6 >= 0.0000011920929
      || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v5 - 1.0)) & _xmm), v7 >= 0.0000011920929) )
    {
      LODWORD(v11) = (int)floorf_0((float)(int)v11 / v4);
      DWORD1(v11) = (int)floorf_0((float)SDWORD1(v11) / v4);
      DWORD2(v11) = (int)floorf_0((float)SDWORD2(v11) / v5);
      HIDWORD(v11) = (int)floorf_0((float)SHIDWORD(v11) / v5);
    }
    v8 = CClientArea::SetMaximizedClipMargins(
           *((CClientArea **)this + 59),
           (const struct _MARGINS *)((unsigned __int64)&v11 & -(__int64)((*((_BYTE *)this + 240) & 4) != 0)));
    v1 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1403u, v10);
  }
  return v1;
}
