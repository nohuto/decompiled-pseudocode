/*
 * XREFs of ?SetIntegerProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01809A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSnapshotMarshaler::SetIntegerProperty(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)-1073741811;
      if ( *((_BYTE *)this + 56) == (a4 != 0) )
        return v5;
      *((_BYTE *)this + 56) = a4 != 0;
LABEL_13:
      *a5 = 1;
      return v5;
    }
    v5 = a4 == 0 ? 0xC000000D : 0;
    if ( a4 && *((_DWORD *)this + 13) != a4 )
    {
      *((_DWORD *)this + 13) = a4;
      goto LABEL_13;
    }
  }
  else
  {
    v5 = a4 == 0 ? 0xC000000D : 0;
    if ( a4 && *((_DWORD *)this + 12) != a4 )
    {
      *((_DWORD *)this + 12) = a4;
      goto LABEL_13;
    }
  }
  return v5;
}
