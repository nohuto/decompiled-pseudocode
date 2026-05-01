/*
 * XREFs of ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x18005A700
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_5628bd74a8815c20418001cca1cbd131___ @ 0x18005A804 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_5628bd74a8815c20418001cca1cbd131___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180128194 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetChromeOptions(__int64 a1, int *a2)
{
  bool v4; // zf
  int v5; // eax
  char v6; // bp
  bool v7; // si
  __int64 v8; // rcx
  __int128 v9; // xmm0
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  _DWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int128 v16; // [rsp+30h] [rbp-38h]
  char v17; // [rsp+40h] [rbp-28h]
  char v18; // [rsp+41h] [rbp-27h]
  char v19; // [rsp+48h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-18h]

  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v4 = *(_BYTE *)(a1 + 550) == 0;
    *(_BYTE *)(a1 + 551) = (a2[1] & 4) != 0;
    if ( !v4 )
      a2[1] |= 4u;
  }
  v5 = *a2;
  if ( (*a2 & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 552) = (a2[1] & 0x20) != 0;
    v5 = *a2;
  }
  if ( (v5 & 0x80u) != 0 )
  {
    *(_BYTE *)(a1 + 553) = (a2[1] & 0x80) != 0;
    v5 = *a2;
  }
  v6 = 0;
  if ( (v5 & 0x40) != 0 )
  {
    v7 = (a2[1] & 0x40) != 0;
    if ( *(_DWORD *)(a1 + 220) == 1 && (a2[1] & 0x40) == 0 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 216, 3LL);
      v6 = *(_BYTE *)(a1 + 52);
    }
    *(_BYTE *)(a1 + 548) = v7;
  }
  v8 = *((_QWORD *)a2 + 1);
  v14[0] = *a2;
  v14[1] = a2[1];
  v15 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_OWORD *)a2 + 1);
  v17 = *((_BYTE *)a2 + 32);
  v18 = *((_BYTE *)a2 + 33);
  v16 = v9;
  v19 = v6;
  v20 = a1;
  v10 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_5628bd74a8815c20418001cca1cbd131___(a1, v14);
  v11 = *((_QWORD *)a2 + 1);
  v12 = v10;
  if ( v11 )
  {
    *((_QWORD *)a2 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v12;
}
