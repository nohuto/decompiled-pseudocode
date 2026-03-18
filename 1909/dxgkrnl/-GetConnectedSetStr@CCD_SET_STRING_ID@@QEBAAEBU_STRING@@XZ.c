/*
 * XREFs of ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DA6F0
 * Callers:
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00D9914 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD974 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00DDF64 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C012D3F0 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0130420 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C01306C8 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x1C00DA8E8 (-_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z.c)
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C00DAC90 (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 */

const struct _STRING *__fastcall CCD_SET_STRING_ID::GetConnectedSetStr(CCD_SET_STRING_ID *this)
{
  _WORD *v1; // rsi
  __int64 v2; // rdi
  int v4; // eax
  unsigned __int16 DescriptorLength; // bx
  __int64 v6; // rdx
  __int64 v7; // r10
  unsigned __int16 v8; // r11

  v1 = (_WORD *)((char *)this + 40);
  v2 = 0LL;
  if ( !*((_WORD *)this + 20) )
  {
    v4 = CCD_SET_STRING_ID::_ReallocString((struct _STRING *)((char *)this + 40), *((_WORD *)this + 4));
    *(_DWORD *)this = v4;
    if ( v4 >= 0 )
    {
      *v1 = 0;
      if ( *((_WORD *)this + 16) )
      {
        do
        {
          DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(
                               this,
                               *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8 * v2 + 6));
          memmove(
            (void *)(*((_QWORD *)this + 6) + v8),
            (const void *)(*((_QWORD *)this + 2) + *(unsigned __int16 *)(v7 + 8 * v6)),
            DescriptorLength);
          *v1 += DescriptorLength;
          if ( *v1 >= *((_WORD *)this + 4) )
            break;
          v2 = (unsigned int)(v2 + 1);
          *(_BYTE *)((unsigned __int16)(*v1)++ + *((_QWORD *)this + 6)) = 94;
        }
        while ( (unsigned int)v2 < *((unsigned __int16 *)this + 16) );
      }
    }
  }
  return (const struct _STRING *)v1;
}
