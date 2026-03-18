/*
 * XREFs of EtwpTraceImageUnload @ 0x14001C640
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x14012B2F0 (EtwpTraceImageUnloadApc.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x14032E6F0 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwpEnumerateAddressSpace @ 0x1405E9F34 (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageUnload @ 0x140678768 (PerfLogImageUnload.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14001D360 (EtwTraceSiloKernelEvent.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwpPsProvTraceImage @ 0x1405E9E00 (EtwpPsProvTraceImage.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140906588 (EtwpCoverageSamplerUnloadImage.c)
 */

void __fastcall EtwpTraceImageUnload(
        unsigned __int16 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        unsigned int a8,
        int a9)
{
  int v13; // ecx
  PIMAGE_NT_HEADERS v14; // rax
  int v15; // edx
  _QWORD v16[2]; // [rsp+40h] [rbp-A8h] BYREF
  int v17; // [rsp+50h] [rbp-98h]
  unsigned int CheckSum; // [rsp+54h] [rbp-94h]
  unsigned int TimeDateStamp; // [rsp+58h] [rbp-90h]
  char v20; // [rsp+5Ch] [rbp-8Ch]
  char v21; // [rsp+5Dh] [rbp-8Bh]
  __int16 v22; // [rsp+5Eh] [rbp-8Ah]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp-88h]
  __int64 v24; // [rsp+68h] [rbp-80h]
  __int64 v25; // [rsp+70h] [rbp-78h]
  __int64 v26; // [rsp+78h] [rbp-70h]
  _QWORD v27[3]; // [rsp+80h] [rbp-68h] BYREF
  int v28; // [rsp+98h] [rbp-50h]
  int v29; // [rsp+9Ch] [rbp-4Ch]
  void *v30; // [rsp+A0h] [rbp-48h]
  __int64 v31; // [rsp+A8h] [rbp-40h]

  v26 = 0LL;
  if ( !a9 && EtwpHostSiloState != -4548 && (*(_DWORD *)(EtwpHostSiloState + 4548) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage(a2, a3, a4);
  if ( a1 && *a1 && *((_QWORD *)a1 + 1) )
  {
    if ( a2 )
      v13 = *(_DWORD *)(a2 + 744);
    else
      v13 = 0;
    v17 = v13;
    v16[0] = a3;
    v16[1] = a4;
    CheckSum = a5;
    v22 = 0;
    v24 = 0LL;
    v25 = 0LL;
    TimeDateStamp = 0;
    ImageBase = 0LL;
    v20 = a6;
    v21 = a7;
    if ( v13 )
    {
      v14 = RtlImageNtHeader(a3);
      if ( v14 )
      {
        CheckSum = v14->OptionalHeader.CheckSum;
        TimeDateStamp = v14->FileHeader.TimeDateStamp;
        ImageBase = v14->OptionalHeader.ImageBase;
      }
    }
    if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 4) != 0 )
      EtwpPsProvTraceImage(a1, v16, 5122LL, a8);
    v27[0] = v16;
    v27[1] = 56LL;
    v27[2] = *((_QWORD *)a1 + 1);
    v28 = *a1;
    v29 = 0;
    v30 = &EtwpNull;
    v31 = 2LL;
    v15 = a8 != 0 ? 20977923 : 4200707;
    if ( a2 )
      EtwTraceSiloKernelEvent(*(_QWORD *)(a2 + 1776), (unsigned int)v27, 3, 4, 5122, v15);
    else
      EtwTraceKernelEvent((unsigned int)v27, 3, 4, 5122, v15);
  }
}
