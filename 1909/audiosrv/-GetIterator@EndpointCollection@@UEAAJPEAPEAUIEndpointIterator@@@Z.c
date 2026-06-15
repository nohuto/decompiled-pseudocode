/*
 * XREFs of ?GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z @ 0x180146A60
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@EndpointIterator@@SAJPEAVEndpointCollection@@PEAPEAUIEndpointIterator@@@Z @ 0x18014651C (-CreateInstance@EndpointIterator@@SAJPEAVEndpointCollection@@PEAPEAUIEndpointIterator@@@Z.c)
 */

__int64 __fastcall EndpointCollection::GetIterator(EndpointCollection *this, struct IEndpointIterator **a2)
{
  unsigned int v2; // ebx
  int Instance; // eax

  v2 = 0;
  if ( a2 )
  {
    *a2 = 0LL;
    Instance = EndpointIterator::CreateInstance(this, a2);
    if ( Instance < 0 )
      return (unsigned int)Instance;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
