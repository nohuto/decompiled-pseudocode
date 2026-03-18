/*
 * XREFs of ?SetHandleProperty@CHolographicViewerMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C01BFDD0
 * Callers:
 *     <none>
 * Callees:
 *     CallerHasScreenDuplicationCapability @ 0x1C01BFA88 (CallerHasScreenDuplicationCapability.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerMarshaler::SetHandleProperty(
        DirectComposition::CHolographicViewerMarshaler *this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( (_DWORD)a2 == 3 )
  {
    if ( (*((_DWORD *)this + 11) & 8) != 0 || !a3 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      *((_QWORD *)this + 11) = a3;
      *((_QWORD *)this + 14) = PsGetCurrentProcess(this, a2);
      if ( CallerHasScreenDuplicationCapability() )
        *((_DWORD *)this + 27) |= 1u;
      *((_DWORD *)this + 11) |= 8u;
      *a4 = 1;
    }
  }
  return v4;
}
