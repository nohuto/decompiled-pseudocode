/*
 * XREFs of ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C0294FC8
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C0296AB0 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049C4C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C0294E20 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CheckPrimaryContentState(DISPLAYSTATECHECKER **this, __int64 a2)
{
  unsigned int v2; // ebx
  DISPLAYSTATECHECKER *v4; // rsi
  unsigned int i; // esi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  __int64 v7; // rdx
  struct DISPLAYDIAGNOSTICADAPTERDATA *v8; // r14
  unsigned int v9; // ebp
  VIDPNSOURCEINFO *v10; // rcx

  v2 = 0;
  if ( (unsigned __int8)*((_DWORD *)this + 453) == 8 )
  {
    v4 = (DISPLAYSTATECHECKER *)this;
    if ( this[224] )
      v4 = this[224];
    if ( *((_DWORD *)this + 452) )
    {
      do
        VIDPNSOURCEINFO::CheckPrimaryContent((DISPLAYSTATECHECKER *)((char *)v4 + 224 * v2++), a2);
      while ( v2 < *((_DWORD *)this + 452) );
    }
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)this + 1470); ++i )
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData((DISPLAYSTATECHECKER *)this, i);
      v8 = DisplayAdapterDiagData;
      if ( DisplayAdapterDiagData )
      {
        v9 = 0;
        if ( *((_DWORD *)DisplayAdapterDiagData + 234) )
        {
          do
          {
            if ( v9 >= 4 )
              v10 = 0LL;
            else
              v10 = (struct DISPLAYDIAGNOSTICADAPTERDATA *)((char *)v8 + 224 * v9 + 40);
            if ( v10 )
              VIDPNSOURCEINFO::CheckPrimaryContent(v10, v7);
            ++v9;
          }
          while ( v9 < *((_DWORD *)v8 + 234) );
        }
      }
    }
  }
  return 0LL;
}
