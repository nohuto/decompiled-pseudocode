/*
 * XREFs of MiCreateFreePfns @ 0x1409BBBA8
 * Callers:
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     MxReleaseFreeDescriptor @ 0x1409BB8A4 (MxReleaseFreeDescriptor.c)
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 */

void __fastcall MiCreateFreePfns(__int128 *a1)
{
  int v1; // eax
  __int64 v2; // rsi
  unsigned __int64 v3; // r9
  __int128 *v4; // rbx
  __int64 v5; // r10
  __int64 *v6; // rdx
  __int64 *v7; // r8
  __int128 v8; // xmm3
  unsigned int v9; // r13d
  __int64 v10; // rdi
  __int128 v11; // xmm1
  unsigned __int64 v12; // r14
  unsigned __int64 **v13; // r15
  unsigned __int64 *v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // edx
  __int128 v18; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v21; // [rsp+50h] [rbp-B8h]
  __int128 v22; // [rsp+58h] [rbp-B0h]
  _OWORD v23[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-80h]
  _QWORD Base[64]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0LL;
  v3 = *((_QWORD *)a1 + 3);
  v4 = a1;
  v5 = *((_QWORD *)a1 + 4);
  if ( (v1 & 0x40000000) != 0 )
  {
    v6 = qword_140A0E5B0;
    *((_DWORD *)a1 + 4) = v1 & 0xBFFFFFFF;
  }
  else
  {
    v6 = MxBootFreeDescriptor;
  }
  v7 = &v6[5 * (unsigned __int16)KeNumberNodes];
  if ( v6 >= v7 )
    goto LABEL_10;
  do
  {
    if ( v6[1] && *v6 >= v3 && *v6 < v5 + v3 )
    {
      Base[v2] = v6;
      v2 = (unsigned int)(v2 + 1);
    }
    v6 += 5;
  }
  while ( v6 < v7 );
  if ( (_DWORD)v2 )
  {
    qsort(Base, (unsigned int)v2, 8uLL, MxDescriptorSort);
    v8 = *v4;
    v9 = 0;
    v20 = *((_QWORD *)v4 + 4);
    v10 = v20;
    v11 = v4[1];
    v22 = v8;
    v18 = v8;
    v19 = v11;
    v12 = *((_QWORD *)&v11 + 1);
    v13 = (unsigned __int64 **)Base;
    while ( 1 )
    {
      v14 = *v13;
      v15 = **v13;
      if ( v15 > v12 )
      {
        v21 = v15 - v12;
        v24 = v15 - v12;
        v23[0] = v8;
        v23[1] = v11;
        MxCreateFreePfns(v23);
        v10 -= v21;
        v12 = *v14;
      }
      v16 = v14[1];
      v17 = *((_DWORD *)v4 + 4);
      v10 -= v16;
      v12 += v16;
      v20 = v10;
      *((_QWORD *)&v19 + 1) = v12;
      MxReleaseFreeDescriptor(v14, v17);
      if ( !v10 )
        break;
      ++v9;
      ++v13;
      if ( v9 >= (unsigned int)v2 )
      {
        a1 = &v18;
        goto LABEL_10;
      }
      v11 = v19;
      v8 = v22;
    }
  }
  else
  {
LABEL_10:
    MxCreateFreePfns(a1);
  }
}
