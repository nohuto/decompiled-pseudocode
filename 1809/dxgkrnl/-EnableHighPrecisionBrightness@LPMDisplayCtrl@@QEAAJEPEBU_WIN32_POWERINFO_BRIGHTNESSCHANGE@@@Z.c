/*
 * XREFs of ?EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C021AF00
 * Callers:
 *     ?DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C021AC90 (-DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall LPMDisplayCtrl::EnableHighPrecisionBrightness(
        LPMDisplayCtrl *this,
        char a2,
        const struct _WIN32_POWERINFO_BRIGHTNESSCHANGE *a3)
{
  PFILE_OBJECT *v3; // rsi
  char v6; // r12
  signed int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v11; // edx
  unsigned int v12; // r8d

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
  v9 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v9 + 24) = -1073741637LL;
  WdLogEvent5_WdError(v9);
LABEL_8:
  if ( !a2 || v7 < 0 )
    v6 = 0;
  Flink = v3[2]->IrpList.Flink[4].Flink;
  KeWaitForSingleObject(&Flink[273], Executive, 0, 0, 0LL);
  BYTE1(Flink[272].Flink) = v6;
  KeReleaseMutex((PRKMUTEX)&Flink[273], 0);
  v11 = -1;
  if ( a2 )
    v12 = *((_DWORD *)a3 + 5);
  else
    v12 = -1;
  if ( a2 )
    v11 = *((_DWORD *)a3 + 1);
  DxgkLogCodePointPacket(0x53u, v11, v12, v7, *(_QWORD *)(&v3[2][1].FinalStatus + 1));
  return (unsigned int)v7;
}
