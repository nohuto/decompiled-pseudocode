/*
 * XREFs of FadeDesktop @ 0x1C0097300
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C0094FF8 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C0097500 (GreSetDeviceGammaRamp.c)
 */

LARGE_INTEGER __fastcall FadeDesktop(unsigned int a1, unsigned int *a2, DWORD a3, int a4)
{
  _DWORD *v5; // r13
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v9; // rbx
  unsigned int v10; // r12d
  DWORD v11; // esi
  unsigned int v12; // edi
  _WORD *v13; // rbx
  DWORD v14; // r15d
  _WORD *v15; // rcx
  __int64 v16; // r10
  unsigned int *v17; // r9
  int v18; // r8d
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  HDC v24; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v26; // rtt
  DWORD v27; // esi
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-48h] BYREF
  LARGE_INTEGER v29; // [rsp+28h] [rbp-40h]
  DWORD LowPart; // [rsp+78h] [rbp+10h]

  v5 = a2 + 1;
  result = KeQueryPerformanceCounter(&PerformanceFrequency);
  v9 = result;
  v29 = result;
  if ( PerformanceFrequency.QuadPart )
  {
    result.QuadPart = 0x3E8 / a1;
    LowPart = result.LowPart;
    v10 = 0x3E8 / a1;
    if ( result.LowPart <= a3 )
    {
      if ( result.LowPart )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = 0;
          if ( *a2 )
          {
            v13 = v5 + 128;
            v14 = a3 - v11;
            do
            {
              v15 = v13;
              v16 = 256LL;
              v17 = &a2[386 * v12 + 644];
              do
              {
                v18 = *(unsigned __int16 *)((char *)v15 + (_QWORD)a2 + 1544LL * v12 - (_QWORD)v5 + 1040);
                if ( a4 )
                  v19 = v11 * v18;
                else
                  v19 = v18 * v14;
                *(v15 - 256) = v19 / a3;
                v20 = *((unsigned __int16 *)v17 - 256);
                if ( a4 )
                  v21 = v11 * v20;
                else
                  v21 = v14 * v20;
                *v15 = v21 / a3;
                v22 = *(unsigned __int16 *)v17;
                if ( a4 )
                  v23 = v11 * v22;
                else
                  v23 = v14 * v22;
                result.QuadPart = v23 / a3;
                v17 = (unsigned int *)((char *)v17 + 2);
                v15[256] = result.LowPart;
                ++v15;
                --v16;
              }
              while ( v16 );
              v24 = *(HDC *)&a2[386 * v12 + 386];
              v5 = a2 + 1;
              if ( v24 )
                result.QuadPart = GreSetDeviceGammaRamp(v24, a2 + 1, 0, 0);
              ++v12;
            }
            while ( v12 < *a2 );
            v9 = v29;
            v10 = LowPart;
          }
          if ( v11 == a3 )
            break;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v26 = 1000LL * (PerformanceCounter.LowPart - v9.LowPart);
          result.QuadPart = ((PerformanceCounter.QuadPart - v9.QuadPart) & 0xFFFFFFFF00000000uLL)
                          / PerformanceFrequency.QuadPart;
          v27 = 1000 * result.LowPart + v26 / PerformanceFrequency.QuadPart;
          if ( v27 < a3 )
          {
            result.QuadPart = UserSleep(v27 % v10);
            v11 = v27 % v10 + v27;
            if ( v11 < a3 )
              continue;
          }
          v11 = a3;
        }
      }
    }
  }
  return result;
}
