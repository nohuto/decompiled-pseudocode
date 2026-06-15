/*
 * XREFs of ?GetNextDevice@EndpointIterator@@UEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180142F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextDevice@EndpointCollection@@QEAAJPEAPEAU__POSITION@@PEAPEAUIEndpointDevice@@@Z @ 0x180142EE0 (-GetNextDevice@EndpointCollection@@QEAAJPEAPEAU__POSITION@@PEAPEAUIEndpointDevice@@@Z.c)
 */

__int64 __fastcall EndpointIterator::GetNextDevice(EndpointIterator *this, struct IEndpointDevice **a2)
{
  unsigned int v2; // ecx
  int NextDevice; // eax

  if ( a2 )
  {
    *a2 = 0LL;
    if ( !*((_DWORD *)this + 10) || *((_QWORD *)this + 4) )
    {
      *((_DWORD *)this + 10) = 1;
      NextDevice = EndpointCollection::GetNextDevice(
                     *((EndpointCollection **)this + 3),
                     (struct __POSITION **)this + 4,
                     a2);
      v2 = 0;
      if ( NextDevice < 0 )
        return (unsigned int)NextDevice;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
