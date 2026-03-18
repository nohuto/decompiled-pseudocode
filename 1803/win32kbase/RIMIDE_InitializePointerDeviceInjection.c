/*
 * XREFs of RIMIDE_InitializePointerDeviceInjection @ 0x1C00F5FE0
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00B7CF0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0131FCC (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00F37B0 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00F5778 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 */

__int64 __fastcall RIMIDE_InitializePointerDeviceInjection(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v7; // esi
  unsigned int v12; // r9d
  __int16 v13; // r14
  char *v14; // rdx
  unsigned int v15; // r8d
  char *v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm1
  unsigned int v19; // ebx
  __int64 v20; // rax
  struct _HIDP_DEVICE_DESC v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[160]; // [rsp+D0h] [rbp-30h] BYREF
  char v24; // [rsp+170h] [rbp+70h] BYREF

  v7 = 0;
  if ( a7 )
    *a7 = 0LL;
  memmove(v23, &commonUsages, 0xA0uLL);
  v12 = 5;
  v13 = 2;
  if ( a1 == 2 )
  {
    v14 = (char *)&touchUsages;
    v13 = 4;
    v15 = 10;
  }
  else
  {
    if ( a1 != 3 )
      return 0LL;
    v14 = (char *)&penUsages;
    v15 = 1;
  }
  v16 = &v24;
  do
  {
    if ( v7 >= 7 )
      break;
    ++v12;
    v17 = 32LL * v7++;
    v18 = *(_OWORD *)&v14[v17 + 16];
    *(_OWORD *)v16 = *(_OWORD *)&v14[v17];
    *((_OWORD *)v16 + 1) = v18;
    v16 += 32;
  }
  while ( v12 < 0xC );
  v19 = BuildReportDescriptor(0xDu, v13, (struct tagUSAGE_PROPERTIES *)v23, 0xCu, v15);
  if ( v19 )
  {
    v22[0] = v22[1];
    v20 = RIMIDECreatePseudoHIDDevice(13, v13, a2, a4, a3, (__int128 *)v22, 0, a5, a6, 0LL);
    if ( v20 )
      *a7 = v20;
    else
      return 0;
  }
  return v19;
}
