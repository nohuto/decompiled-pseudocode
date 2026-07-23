/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x14018A3A4
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char PpmHeteroUpdateHgsConfiguration()
{
  char v0; // bl
  __int64 v2; // rcx
  char v3; // al
  _QWORD *v4; // rcx
  _BYTE *Prcb; // rax
  int IsEmptyAffinity; // r12d
  _BYTE *v7; // rax
  unsigned int v8; // r15d
  int v9; // esi
  char v10; // di
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r15d
  int v16; // esi
  char v17; // di
  unsigned int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v22; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-D0h]
  int v24; // [rsp+40h] [rbp-C8h]
  _QWORD v25[22]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v26[22]; // [rsp+F8h] [rbp-10h] BYREF

  v0 = 0;
  if ( PpmHeteroHgsEnabled )
  {
    v21 = __readmsr(0x1B1u);
    if ( (v21 & 0x4000000) != 0 )
    {
      LODWORD(v26[0]) = 1310721;
      PpmHeteroHgsPopulated = 1;
      memset((char *)v26 + 4, 0, 0xA4uLL);
      LODWORD(v25[0]) = 1310721;
      memset((char *)v25 + 4, 0, 0xA4uLL);
      v23 = qword_140405158[0];
      LOWORD(v24) = 0;
      v22 = (unsigned __int16 *)PpmCheckRegistered;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
      {
        v2 = *(unsigned __int16 *)(KeGetPrcb(v21) + 24314);
        if ( !*(_BYTE *)(PpmHeteroHgsInterface + 8 * v2 + 16)
          || (v3 = *(_BYTE *)(PpmHeteroHgsInterface + 8 * v2 + 17), v4 = v25, !v3) )
        {
          v4 = v26;
        }
        KeAddProcessorAffinityEx(v4, v21);
      }
      if ( (unsigned int)KeIsEmptyAffinityEx(v25) )
      {
        v23 = qword_140405158[0];
        LOWORD(v24) = 0;
        v22 = (unsigned __int16 *)PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
        {
          Prcb = (_BYTE *)KeGetPrcb(v21);
          if ( Prcb[24318] )
          {
            v0 = 1;
            Prcb[24318] = 0;
          }
          if ( Prcb[24317] )
          {
            v0 = 1;
            Prcb[24317] = 0;
          }
          if ( Prcb[24316] )
          {
            v0 = 1;
            Prcb[24316] = 0;
          }
        }
      }
      else
      {
        IsEmptyAffinity = KeIsEmptyAffinityEx(v26);
        LOWORD(v24) = 0;
        v22 = (unsigned __int16 *)v26;
        v23 = v26[1];
        while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
        {
          v7 = (_BYTE *)KeGetPrcb(v21);
          if ( v7[24318] )
          {
            v0 = 1;
            v7[24318] = 0;
          }
          if ( v7[24317] )
          {
            v0 = 1;
            v7[24317] = 0;
          }
          if ( v7[24316] != 1 )
          {
            v0 = 1;
            v7[24316] = 1;
          }
        }
        v8 = -1;
        v9 = KeCountSetBitsAffinityEx(v25);
        if ( v9 )
        {
          v10 = IsEmptyAffinity == 0;
          do
          {
            v23 = v25[1];
            v22 = (unsigned __int16 *)v25;
            LOWORD(v24) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
            {
              v11 = KeGetPrcb(v21);
              if ( *(_BYTE *)(v11 + 24316) )
              {
                v0 = 1;
                *(_BYTE *)(v11 + 24316) = 0;
              }
            }
            v12 = -1;
            v23 = v25[1];
            v22 = (unsigned __int16 *)v25;
            LOWORD(v24) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
            {
              v13 = *(unsigned __int16 *)(KeGetPrcb(v21) + 24314);
              if ( (v8 == -1 || *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v13 + 16) > v8)
                && v12 >= *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v13 + 16) )
              {
                v12 = *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v13 + 16);
              }
            }
            v23 = v25[1];
            v22 = (unsigned __int16 *)v25;
            LOWORD(v24) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
            {
              v14 = KeGetPrcb(v21);
              if ( *(unsigned __int8 *)(PpmHeteroHgsInterface + 8LL * *(unsigned __int16 *)(v14 + 24314) + 16) == v12 )
              {
                if ( *(_BYTE *)(v14 + 24317) != v10 )
                {
                  v0 = 1;
                  *(_BYTE *)(v14 + 24317) = v10;
                }
                --v9;
              }
            }
            v8 = v12;
            ++v10;
          }
          while ( v9 );
        }
        v15 = -1;
        v16 = KeCountSetBitsAffinityEx(v25);
        if ( v16 )
        {
          v17 = IsEmptyAffinity == 0;
          do
          {
            v23 = v25[1];
            v18 = -1;
            v22 = (unsigned __int16 *)v25;
            LOWORD(v24) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
            {
              v19 = *(unsigned __int16 *)(KeGetPrcb(v21) + 24314);
              if ( (v15 == -1 || *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v19 + 17) > v15)
                && v18 >= *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v19 + 17) )
              {
                v18 = *(unsigned __int8 *)(PpmHeteroHgsInterface + 8 * v19 + 17);
              }
            }
            v23 = v25[1];
            v22 = (unsigned __int16 *)v25;
            LOWORD(v24) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v22) )
            {
              v20 = KeGetPrcb(v21);
              if ( *(unsigned __int8 *)(PpmHeteroHgsInterface + 8LL * *(unsigned __int16 *)(v20 + 24314) + 17) == v18 )
              {
                if ( *(_BYTE *)(v20 + 24318) != v17 )
                {
                  v0 = 1;
                  *(_BYTE *)(v20 + 24318) = v17;
                }
                --v16;
              }
            }
            ++v17;
            v15 = v18;
          }
          while ( v16 );
        }
      }
      v21 = __readmsr(0x1B1u) & 0xFFFFFFFFFBFFFFFFuLL;
      __writemsr(0x1B1u, v21);
    }
  }
  return v0;
}
