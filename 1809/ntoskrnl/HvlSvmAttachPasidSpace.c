/*
 * XREFs of HvlSvmAttachPasidSpace @ 0x140275A40
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpAttachRootSvmDevice @ 0x140276404 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1402764CC (HvlpDetachRootSvmDevice.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmAttachPasidSpace(unsigned int a1, int a2, int a3, unsigned int a4)
{
  char v4; // si
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // r8
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]
  int v15; // [rsp+3Ch] [rbp-Ch]

  v4 = 0;
  v5 = a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    v8 = HvlpAttachRootSvmDevice(a1, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = 1;
  }
  v14 = a2;
  v15 = a3;
  v13 = v5;
  while ( 1 )
  {
    LOWORD(v9) = HvcallpExtendedFastHypercall(65698LL, (__int64)&v13, 16LL);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v9) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v10, v9, v11) < 0 )
    {
      v8 = -1073741670;
      goto LABEL_10;
    }
  }
  v8 = HvlpHvToNtStatus((unsigned __int16)v9);
  if ( v8 >= 0 )
    return (unsigned int)v8;
LABEL_10:
  if ( v4 )
    HvlpDetachRootSvmDevice((unsigned int)v5);
  return (unsigned int)v8;
}
