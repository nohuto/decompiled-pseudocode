/*
 * XREFs of CrmGlobalsRegistrationRemoveAll @ 0x18007E0AC
 * Callers:
 *     CrmGlobalsCleanup @ 0x18007DFAC (CrmGlobalsCleanup.c)
 * Callees:
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x18007E1BC (CrmGlobalsRegistrationsDeleteRoutine.c)
 */

__int64 CrmGlobalsRegistrationRemoveAll()
{
  DWORD CurrentThreadId; // eax
  unsigned __int64 v1; // rcx
  char v2; // al
  int v3; // edi
  _QWORD *v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  char v8; // dl

  RtlAcquireSRWLockExclusive(&unk_1800ABF28);
  CurrentThreadId = GetCurrentThreadId();
  v1 = xmmword_1800ABF38;
  dword_1800ABF30 = CurrentThreadId;
  v2 = BYTE8(xmmword_1800ABF38);
  if ( (BYTE8(xmmword_1800ABF38) & 1) != 0 && (_QWORD)xmmword_1800ABF38 )
    v1 = (unsigned __int64)&xmmword_1800ABF38 ^ xmmword_1800ABF38;
  v3 = BYTE8(xmmword_1800ABF38) & 1;
  if ( v1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v1 )
        {
          v4 = (_QWORD *)v1;
          if ( v3 )
            v1 ^= *(_QWORD *)v1;
          else
            v1 = *(_QWORD *)v1;
          *v4 = 0LL;
        }
        v5 = *(_QWORD *)(v1 + 8);
        if ( !v5 )
          break;
        v6 = v1;
        if ( v3 )
          v1 ^= v5;
        else
          v1 = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v6 + 8) = 0LL;
      }
      v7 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v3 && v7 )
        v7 ^= v1;
      CrmGlobalsRegistrationsDeleteRoutine(v1, 0LL);
      if ( !v7 )
        break;
      v1 = v7;
    }
    v2 = BYTE8(xmmword_1800ABF38);
  }
  xmmword_1800ABF38 = 0LL;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( (v2 & 1) != 0 )
    v8 = 1;
  dword_1800ABF30 = 0;
  BYTE8(xmmword_1800ABF38) = v8;
  return RtlReleaseSRWLockExclusive(&unk_1800ABF28);
}
