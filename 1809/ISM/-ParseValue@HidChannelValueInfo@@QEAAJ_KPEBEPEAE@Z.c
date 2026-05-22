/*
 * XREFs of ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAE@Z @ 0x18007E1DC
 * Callers:
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x18007F56C (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidChannelValueInfo::ParseValue(
        HidChannelValueInfo *this,
        unsigned __int64 a2,
        const unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  unsigned __int64 v4; // rax
  const unsigned __int8 *v6; // rcx
  unsigned __int8 v7; // r8
  const unsigned __int8 *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned int v10; // edx

  v4 = *((unsigned int *)this + 12);
  if ( v4 >= a2 )
  {
    v10 = 0;
  }
  else
  {
    v6 = a3 + 1;
    v7 = 1;
    v8 = &v6[v4];
    v9 = *v8;
    if ( *((_DWORD *)this + 10) > 1u )
    {
      do
      {
        --v8;
        ++v7;
        v9 = *v8 | (v9 << 8);
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 10) );
    }
    v10 = *((_DWORD *)this + 13) & (v9 >> *((_BYTE *)this + 44));
  }
  if ( v10 < *((__int64 *)this + 3) || v10 > *((__int64 *)this + 4) )
  {
    *a4 = 0;
    return 2147942487LL;
  }
  else
  {
    *a4 = v10;
    return 0LL;
  }
}
