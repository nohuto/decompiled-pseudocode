/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800C3AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  unsigned int v4; // esi
  int v7; // eax
  __int64 v9; // rcx
  _OWORD *v10; // rax
  void *v11; // rcx

  v4 = 0;
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
  v7 = *((_DWORD *)a2 + 16);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * a3;
  *((_DWORD *)this + 26) = v7;
  if ( a4 )
  {
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)a4;
      *(_OWORD *)(v9 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v9 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v9 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v9 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v10 = operator new(0x44uLL);
      v11 = v10;
      if ( v10 )
      {
        *v10 = *(_OWORD *)a4;
        v10[1] = *((_OWORD *)a4 + 1);
        v10[2] = *((_OWORD *)a4 + 2);
        v10[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v10 + 16) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0x33u, 0LL);
        return v4;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 14, (signed __int64)v11, 0LL) )
        operator delete(v11, 0x44uLL);
    }
  }
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 384LL);
  if ( *((_BYTE *)this + 212) )
    *((_QWORD *)this + 22) = 0LL;
  return v4;
}
