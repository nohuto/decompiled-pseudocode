/*
 * XREFs of DCompositionRenderBlack @ 0x1C0142D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C01453A8 (-RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DCompositionRenderBlack(__int64 a1)
{
  int v1; // ebx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // edx

  v1 = a1;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v3 = DefaultConnection;
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CConnection::RenderBlack(DefaultConnection, v1 != 0);
    DirectComposition::CConnection::Release(v3, v5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
