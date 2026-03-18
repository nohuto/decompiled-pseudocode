/*
 * XREFs of ?SetHandleProperty@CHolographicExclusiveViewMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C016E6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::SetHandleProperty(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  unsigned int v8; // esi
  int v9; // edi

  v8 = 0;
  *((_QWORD *)this + 6) = PsGetCurrentProcess(this);
  v9 = a2 - 4;
  if ( !v9 )
  {
    *((_QWORD *)this + 8) = a3;
    goto LABEL_6;
  }
  if ( v9 == 1 )
  {
    *((_QWORD *)this + 9) = a3;
LABEL_6:
    *((_DWORD *)this + 4) |= 0x80u;
    *a4 = 1;
    return v8;
  }
  return (unsigned int)-1073741811;
}
