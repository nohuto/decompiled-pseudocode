/*
 * XREFs of IcGetInputState @ 0x1C002DB6C
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C002DA90 (IrqLibpGetVectorInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcGetInputState(unsigned int a1, _OWORD *a2)
{
  __int64 i; // r8
  unsigned int v3; // eax
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _OWORD *v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v3 = *(_DWORD *)(i + 16);
      if ( a1 >= v3 && a1 <= *(_DWORD *)(i + 20) )
      {
        v4 = (_OWORD *)(i + 200LL * (a1 - v3) + 32);
        v5 = v4[1];
        *a2 = *v4;
        v6 = v4[2];
        a2[1] = v5;
        v7 = v4[3];
        a2[2] = v6;
        v8 = v4[4];
        a2[3] = v7;
        v9 = v4[5];
        a2[4] = v8;
        v10 = v4[6];
        a2[5] = v9;
        a2[6] = v10;
        v11 = a2 + 8;
        v12 = v4[7];
        v4 += 8;
        *(v11 - 1) = v12;
        v13 = v4[1];
        *v11 = *v4;
        v14 = v4[2];
        v11[1] = v13;
        v15 = v4[3];
        v16 = *((_QWORD *)v4 + 8);
        v11[2] = v14;
        v11[3] = v15;
        *((_QWORD *)v11 + 8) = v16;
        return 0LL;
      }
    }
  }
  return 3221226021LL;
}
