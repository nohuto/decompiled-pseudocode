/*
 * XREFs of ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x18012E374
 * Callers:
 *     s_midiOpenPort @ 0x1800E1060 (s_midiOpenPort.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 */

__int64 __fastcall FilterInstantiate2(const unsigned __int16 *a1, __int64 a2, void **a3)
{
  HANDLE FileW; // rax
  signed int LastError; // eax
  unsigned int v7; // ebx

  FileW = CreateFileW(a1, 0xC0000000, 0, 0LL, 3u, 0x40800080u, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_634ff85d437232cad1e4e66351732bf3_Traceguids,
        a1);
    }
    return v7;
  }
  else
  {
    *a3 = FileW;
    return 0LL;
  }
}
