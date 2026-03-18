/*
 * XREFs of ?SetBufferProperty@CParticleGeneratorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01C48E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleGeneratorMarshaler::SetBufferProperty(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // eax
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d

  v6 = 0;
  v7 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    if ( a4 && a5 == 12 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)a4;
      *((_DWORD *)this + 16) = a4[2];
      v7 = 128;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  v8 = a3 - 1;
  if ( !v8 )
  {
    if ( a4 && a5 == 12 )
    {
      *(_QWORD *)((char *)this + 68) = *(_QWORD *)a4;
      *((_DWORD *)this + 19) = a4[2];
      v7 = 256;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  v9 = v8 - 6;
  if ( !v9 )
  {
    if ( a4 && a5 == 16 )
    {
      v7 = 0x4000;
      *(_OWORD *)((char *)this + 100) = *(_OWORD *)a4;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a4 && a5 == 16 )
    {
      v7 = 0x8000;
      *(_OWORD *)((char *)this + 116) = *(_OWORD *)a4;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a4 && a5 == 16 )
    {
      v7 = 0x10000;
      *(_OWORD *)((char *)this + 132) = *(_OWORD *)a4;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a4 && a5 == 16 )
    {
      v7 = 0x20000;
      *(_OWORD *)((char *)this + 148) = *(_OWORD *)a4;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  v13 = v12 - 5;
  if ( !v13 )
  {
    if ( a4 && a5 == 12 )
    {
      *(_QWORD *)((char *)this + 172) = *(_QWORD *)a4;
      *((_DWORD *)this + 45) = a4[2];
      v7 = 0x400000;
      goto LABEL_33;
    }
LABEL_34:
    v6 = -1073741811;
    goto LABEL_35;
  }
  if ( v13 != 1 || !a4 || a5 != 12 )
    goto LABEL_34;
  *((_QWORD *)this + 23) = *(_QWORD *)a4;
  *((_DWORD *)this + 48) = a4[2];
  v7 = 0x800000;
LABEL_33:
  *a6 = 1;
LABEL_35:
  *((_DWORD *)this + 4) |= v7;
  return v6;
}
