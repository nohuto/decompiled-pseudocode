/*
 * XREFs of sub_1800DE4C8 @ 0x1800DE4C8
 * Callers:
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 * Callees:
 *     RtlExpandEnvironmentStrings_U @ 0x1800028C0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpEnsureBufferSize @ 0x18007F3B0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_1800DE4C8(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r8
  __int64 *v7; // rbx
  __int64 v8; // rcx
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = a1;
  if ( a2 && a3 && a2 != a3 )
  {
    if ( *a2 )
    {
      v13[0] = 0LL;
      v13[1] = 0LL;
      RtlEnterCriticalSection((__int64)&unk_180164FE0);
      v5 = RtlExpandEnvironmentStrings_U(0, a2, (__int64)v13, &v14);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741789 )
      {
        if ( (unsigned int)v14 > 0xFFFE || (v11 = (unsigned int)v14 + 4LL, v11 > 0xFFFE) )
        {
          v5 = -1073741562;
        }
        else if ( (a3 == (unsigned __int16 *)-16LL || v11 > *((_QWORD *)a3 + 4))
               && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v11) < 0 )
        {
          v5 = -1073741801;
        }
        else
        {
          *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 2);
          a3[1] = a3[16];
          v5 = RtlExpandEnvironmentStrings_U(0, a2, (__int64)a3, 0LL);
          if ( v5 >= 0 )
            v5 = 0;
        }
      }
      RtlLeaveCriticalSection((__int64)&unk_180164FE0);
    }
    else
    {
      *a3 = 0;
      v6 = *a2 + 2LL;
      if ( v6 <= 0xFFFE )
      {
        v7 = (__int64 *)(a3 + 8);
        if ( (a3 == (unsigned __int16 *)-16LL || v6 > *((_QWORD *)a3 + 4))
          && (int)RtlpEnsureBufferSize(0, (__int64)(a3 + 8), v6) < 0 )
        {
          return (unsigned int)-1073741801;
        }
        else
        {
          v8 = *v7;
          *((_QWORD *)a3 + 1) = *v7;
          memmove((void *)(v8 + 2 * ((unsigned __int64)*a3 >> 1)), *((const void **)a2 + 1), *a2);
          v9 = *a3;
          a3[1] = *a2 + *a3 + 2;
          v10 = (unsigned __int16)(*a2 + v9);
          *a3 = v10;
          *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * (v10 >> 1)) = 0;
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1073741562;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
