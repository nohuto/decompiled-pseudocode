/*
 * XREFs of ??$reset@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x1801FC840
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801FCE4C (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Setp@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@AEAAXPEAVDDAScreenCapture@@U?$integral_constant@_N$0A@@1@@Z @ 0x1801FC7C0 (--$_Setp@VDDAScreenCapture@@@-$shared_ptr@VDDAScreenCapture@@@std@@AEAAXPEAVDDAScreenCapture@@U-.c)
 */

void __fastcall std::shared_ptr<DDAScreenCapture>::reset<DDAScreenCapture>(_QWORD *a1, DDAScreenCapture *a2)
{
  std::_Ref_count_base *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  std::shared_ptr<DDAScreenCapture>::_Setp<DDAScreenCapture>((DDAScreenCapture **)&v4, a2);
  *a1 = v4;
  v3 = (std::_Ref_count_base *)a1[1];
  a1[1] = *((_QWORD *)&v4 + 1);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
