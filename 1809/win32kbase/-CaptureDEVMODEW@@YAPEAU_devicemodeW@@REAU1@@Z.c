/*
 * XREFs of ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C005EA70
 * Callers:
 *     NtGdiOpenDCW @ 0x1C005E1A0 (NtGdiOpenDCW.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     AllocThreadBufferWithTag @ 0x1C0024150 (AllocThreadBufferWithTag.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

struct _devicemodeW *__fastcall CaptureDEVMODEW(struct _devicemodeW *volatile a1)
{
  int dmSize; // esi
  int dmDriverExtra; // r14d
  __int64 v3; // rdi
  _WORD *v4; // rbx

  dmSize = a1->dmSize;
  dmDriverExtra = a1->dmDriverExtra;
  v3 = (unsigned int)(dmSize + dmDriverExtra);
  if ( (unsigned int)v3 <= 0x48 )
    return 0LL;
  v4 = (_WORD *)AllocThreadBufferWithTag(v3, 0x706D7447u, 0);
  if ( v4 )
  {
    if ( (struct _devicemodeW *volatile)((char *)a1 + v3) < a1
      || (unsigned __int64)a1->dmDeviceName + v3 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v4, a1, (unsigned int)v3);
    v4[34] = dmSize;
    v4[35] = dmDriverExtra;
  }
  return (struct _devicemodeW *)v4;
}
