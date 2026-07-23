/*
 * XREFs of sub_180040830 @ 0x180040830
 * Callers:
 *     sub_180045F38 @ 0x180045F38 (sub_180045F38.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 * Callees:
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_180046C60 @ 0x180046C60 (sub_180046C60.c)
 *     sub_180046D10 @ 0x180046D10 (sub_180046D10.c)
 *     sub_180048810 @ 0x180048810 (sub_180048810.c)
 *     sub_180050744 @ 0x180050744 (sub_180050744.c)
 *     sub_1800515E8 @ 0x1800515E8 (sub_1800515E8.c)
 *     sub_1800EFD34 @ 0x1800EFD34 (sub_1800EFD34.c)
 *     sub_180103470 @ 0x180103470 (sub_180103470.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 *     sub_18010B150 @ 0x18010B150 (sub_18010B150.c)
 */

__int64 __fastcall sub_180040830(_DWORD *a1, unsigned __int64 a2, int a3, _QWORD *a4, _WORD *a5)
{
  int v6; // r15d
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  _WORD *v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  char v19; // dl
  unsigned int v20; // ebp
  char v21; // dl
  unsigned __int8 v22; // dl
  char v23; // cl
  __int64 v24; // rax
  bool v25; // zf
  unsigned __int64 v26; // rdx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 UserModeGlobalLogger; // rcx
  __int64 v34; // rcx
  __int16 v35; // ax
  char v36; // al
  __int64 v37; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v8 = a3 | a1[5] & 0x11000001;
  v9 = 0;
  v10 = a1[55];
  if ( v10 )
    LOBYTE(v9) = v10 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v11 = a5;
  v12 = v8 | 1;
  v13 = 0LL;
  if ( !v9 )
    v12 = v8;
  if ( a5 )
  {
    v13 = sub_180046D10(a1, a2, v12);
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v35 = 0;
    else
      v35 = *(_WORD *)v13;
    *v11 = v35;
  }
  else if ( a4 )
  {
    *a4 = sub_180046C60(a1, a2, v12, 0LL);
  }
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( a1[6] )
    {
      if ( (v13 || (v13 = sub_180046D10(a1, a2, v12)) != 0) && v13 != -1 )
      {
        v36 = *(_BYTE *)(v13 + 2);
        if ( (v36 & 0xF) != 0 && (int)sub_1800EFD34(v36 & 0xF, (_DWORD)a1, a2, 3, v13 + 16) < 0 )
          return 0LL;
      }
    }
  }
  if ( (a1[5] & 0x10000000) == 0 || sub_180040320((__int64)a1, a2, v12) != -1 )
  {
    if ( (_WORD)a2 )
    {
      v14 = 0;
    }
    else
    {
      v32 = sub_1800515E8(&qword_180166A60, 2 * ((a2 - qword_180166A58) >> 20));
      if ( !v32 || (v14 = v32 - 1, v14 == 2) )
      {
        v20 = sub_180050744(a1, a2, v12) != 0;
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 && v20 )
          sub_180103470(a1, a2, 3LL);
        return v20;
      }
    }
    v15 = 48LL * v14;
    v16 = (__int64)&a1[v15 + 64];
    if ( (dword_18016273C & 1) != 0 )
    {
      v18 = sub_18010B150(&a1[v15 + 64], a2);
    }
    else
    {
      v17 = a2 & *(_QWORD *)v16;
      if ( (v16 ^ qword_180163540 ^ v17 ^ *(_QWORD *)(v17 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v18 = v17 + 32 * ((unsigned __int64)(unsigned int)(a2 - v17) >> *(_BYTE *)(v16 + 8));
      else
        v18 = 0LL;
    }
    if ( v18 )
    {
      v19 = *(_BYTE *)(v18 + 24);
      if ( (v19 & 1) != 0 )
      {
        v20 = 1;
        if ( (v19 & 2) != 0 )
        {
          v22 = v19 & 0xC;
          if ( v22 >= 8u || (((1 << *(_BYTE *)(v16 + 8)) - 1) & a2) == 0 )
          {
LABEL_21:
            v23 = *(_BYTE *)(v16 + 8);
            v24 = v18 & *(_QWORD *)v16;
            if ( a2 <= v24 + ((v18 - v24) >> 5 << v23) )
            {
              sub_180036AE0(v16, v18, 0, v12);
              if ( RtlGetCurrentServiceSessionId() )
                v34 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
              else
                v34 = 2147353472LL;
              if ( *(_BYTE *)v34 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                sub_180103470(*(_QWORD *)(v16 + 56), a2, 3LL);
            }
            else
            {
              v25 = v22 == 8;
              v26 = v24 + ((v18 - v24) >> 5 << v23);
              if ( v25 )
              {
                v20 = sub_1800413B0(*(_QWORD *)(v16 + 24), v26, a2, v12);
              }
              else
              {
                v20 = sub_180038C70(*(PRTL_SRWLOCK *)(v16 + 32), v26, a2, v12, (unsigned int *)&v37);
                if ( v20 )
                {
                  v30 = *(_QWORD *)(v16 + 24);
                  if ( (unsigned int)v37 <= (unsigned int)*(unsigned __int16 *)(v30 + 60) - 16 )
                  {
                    v31 = byte_180120E60[(unsigned __int64)(unsigned int)(v37 + 15) >> 4];
                    if ( (*(_QWORD *)(v30 + 8 * v31 + 128) & 1) != 0 )
                      sub_180048810(v30, v31, 0LL);
                  }
                }
              }
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && SharedData->ServiceSessionId )
                v28 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
              else
                v28 = 2147353472LL;
              if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                if ( v20 )
                {
                  LOBYTE(v6) = (*(_BYTE *)(v18 + 24) & 0xC) != 8;
                  sub_180103470(*(_QWORD *)(v16 + 56), a2, (unsigned int)(v6 + 2));
                }
              }
            }
            return v20;
          }
        }
        else
        {
          v18 += -32LL * *(unsigned __int8 *)(v18 + 31);
          v21 = *(_BYTE *)(v18 + 24);
          if ( (v21 & 3) == 3 )
          {
            v22 = v21 & 0xC;
            if ( v22 >= 8u )
              goto LABEL_21;
          }
        }
      }
    }
    sub_18010A694(9, *(_QWORD *)(v16 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  sub_18010A694(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
  return 0LL;
}
