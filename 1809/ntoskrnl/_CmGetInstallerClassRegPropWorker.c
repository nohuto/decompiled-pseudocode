/*
 * XREFs of _CmGetInstallerClassRegPropWorker @ 0x1406F2648
 * Callers:
 *     _CmGetInstallerClassRegProp @ 0x1406F24D4 (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     _MapCmClassPropertyToRegValue @ 0x14015B6AC (_MapCmClassPropertyToRegValue.c)
 *     _CmClassPropertyRead @ 0x14015B71C (_CmClassPropertyRead.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14059BA2C (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14059FB8C (_CmOpenInstallerClassRegKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405C7E94 (_PnpCtxRegQueryValueIndirect.c)
 */

__int64 __fastcall CmGetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int *a7,
        __int16 a8)
{
  int v8; // ebx
  unsigned int v11; // r13d
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  int ValueIndirect; // eax
  int v19; // edx
  __int64 v20; // [rsp+28h] [rbp-38h]
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v22; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0;
  Handle = 0LL;
  v22 = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_18;
  }
  v11 = *a7;
  if ( *a7 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v8 = CmOpenInstallerClassRegKey(v16, v12, v14, v15, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_18;
    v16 = a1;
  }
  if ( a4 == 8 || a4 == 13 || a4 <= 19 && a4 > 17 )
  {
    if ( !a3 )
      a3 = Handle;
    goto LABEL_15;
  }
  v19 = (int)Handle;
  if ( a3 )
    v19 = (int)a3;
  v8 = PnpOpenPropertiesKey(v16, v19, 0LL, 1, 0, v20, &v22);
  if ( v8 >= 0 )
  {
    a3 = v22;
LABEL_15:
    if ( !MapCmClassPropertyToRegValue(v13, a4) )
    {
      v8 = -1073741264;
      goto LABEL_18;
    }
    ValueIndirect = PnpCtxRegQueryValueIndirect(a1, (__int64)a3);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( (int)(ValueIndirect + 0x80000000) < 0 || ValueIndirect == -1073741789 )
      {
        if ( a4 == 8 && v11 > 0x40 )
        {
          v8 = -1073741595;
        }
        else
        {
          *a7 = v11;
          *a5 = 0;
          if ( ValueIndirect || !v11 )
            v8 = -1073741789;
        }
      }
      else
      {
        v8 = ValueIndirect;
      }
      goto LABEL_18;
    }
  }
  v8 = -1073741275;
LABEL_18:
  if ( v22 )
    ZwClose(v22);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
