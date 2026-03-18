/*
 * XREFs of ?GetIndicesCore@CMeshGeometry2D@@MEAAJIPEAII@Z @ 0x1802163F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMeshGeometry2D::GetIndicesCore(CMeshGeometry2D *this, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v5; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8

  v5 = *((_DWORD *)this + 40) >> 2;
  if ( a4 >= v5 )
  {
    v7 = 0;
    if ( v5 )
    {
      v8 = 0LL;
      v9 = v5;
      do
      {
        a3[v8] = a2 + *(_DWORD *)(*((_QWORD *)this + 21) + v8 * 4);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0xF9u, 0LL);
  }
  return v7;
}
