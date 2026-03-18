/*
 * XREFs of ?EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C024FB90
 * Callers:
 *     ?DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C024F920 (-DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall LPMDisplayCtrl::EnableHighPrecisionBrightness(
        LPMDisplayCtrl *this,
        char a2,
        const struct _WIN32_POWERINFO_BRIGHTNESSCHANGE *a3)
{
  PFILE_OBJECT *v3; // rsi
  char v6; // r12
  signed int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v13; // edx
  unsigned int v14; // r8d

  v3 = FileObject;
  v6 = 1;
  if ( !a2 )
  {
    memset(FileObject + 17, 0, 0x20uLL);
    *((_DWORD *)v3 + 11) = 0;
    goto LABEL_7;
  }
  if ( *((_DWORD *)FileObject + 10) && *((_DWORD *)FileObject + 28) )
  {
    memmove(FileObject + 17, a3, 0x20uLL);
    *((_DWORD *)v3 + 11) = 1;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  memset(FileObject + 17, 0, 0x20uLL);
  *((_DWORD *)v3 + 11) = 0;
  v7 = -1073741637;
  v11 = WdLogNewEntry5_WdError(v9, v8, v10);
  *(_QWORD *)(v11 + 24) = -1073741637LL;
  WdLogEvent5_WdError(v11);
LABEL_8:
  if ( !a2 || v7 < 0 )
    v6 = 0;
  Flink = v3[2]->IrpList.Flink[4].Flink;
  KeWaitForSingleObject(&Flink[280], Executive, 0, 0, 0LL);
  BYTE1(Flink[279].Flink) = v6;
  KeReleaseMutex((PRKMUTEX)&Flink[280], 0);
  v13 = -1;
  if ( a2 )
    v14 = *((_DWORD *)a3 + 5);
  else
    v14 = -1;
  if ( a2 )
    v13 = *((_DWORD *)a3 + 1);
  DxgkLogCodePointPacket(0x53u, v13, v14, v7, *(_QWORD *)(&v3[2][1].FinalStatus + 1));
  return (unsigned int)v7;
}
