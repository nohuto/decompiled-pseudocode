/*
 * XREFs of ComputeProcessorEnergy @ 0x1C000C6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeProcessorEnergy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int *v6; // r8
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int *v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // r11d
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 result; // rax

  v6 = (unsigned int *)((char *)&unk_1C00139C8 + 256 * (unsigned __int64)a1);
  v8 = v6[1];
  if ( (v8 & 1) != 0 )
  {
    v9 = 0;
    v10 = (unsigned __int8)v8 >> 1;
    if ( v10 )
    {
      v11 = v6 + 2;
      do
      {
        v12 = *v11;
        if ( a4 == (unsigned __int8)*v11 )
        {
          v14 = v12 >> 8;
          goto LABEL_15;
        }
        if ( a4 < (unsigned __int8)v12 )
          break;
        ++v9;
        ++v11;
      }
      while ( v9 < v10 );
      if ( !v9 )
        goto LABEL_11;
      v13 = v6[v9 + 1] >> 8;
      if ( v9 == v10 )
        --v9;
    }
    else
    {
LABEL_11:
      v9 = 1;
      v13 = v6[2] >> 8;
    }
    v15 = v6[v9 + 1];
    v16 = v6[v9 + 2];
    if ( (unsigned __int8)v15 < (unsigned int)(unsigned __int8)v16 )
      v14 = v13
          + (int)((a4 - (unsigned __int8)v15) * ((v16 >> 8) - (v15 >> 8)))
          / ((unsigned __int8)v16 - (unsigned __int8)v15);
    else
      v14 = 0LL;
LABEL_15:
    v17 = 100LL;
  }
  else
  {
    v14 = *v6;
    v17 = a4;
  }
  result = 10 * a2 * v17 * v14 / (unsigned __int64)qword_1C0013BD0;
  *a5 = result;
  return result;
}
