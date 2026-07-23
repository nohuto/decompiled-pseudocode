/*
 * XREFs of PiCMReturnDepthResultData @ 0x140839E9C
 * Callers:
 *     PiCMGetDeviceDepth @ 0x1408393A8 (PiCMGetDeviceDepth.c)
 * Callees:
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnDepthResultData(int a1, int a2, int a3, _DWORD *a4, unsigned int Length, _DWORD *a6)
{
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h]

  *a6 = 0;
  v8 = 0;
  if ( Length >= 0xC && a3 == 12 )
  {
    LODWORD(v10) = 12;
    HIDWORD(v10) = a1;
    ProbeForWrite(a4, Length, 4u);
    *(_QWORD *)a4 = v10;
    a4[2] = a2;
    *a6 = 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
