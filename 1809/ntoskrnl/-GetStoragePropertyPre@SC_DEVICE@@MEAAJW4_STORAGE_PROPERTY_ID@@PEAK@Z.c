/*
 * XREFs of ?GetStoragePropertyPre@SC_DEVICE@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAK@Z @ 0x14032B890
 * Callers:
 *     ?GetStoragePropertyPre@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAK@Z @ 0x140169EC0 (-GetStoragePropertyPre@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SC_DEVICE::GetStoragePropertyPre(SC_DEVICE *this, enum _STORAGE_PROPERTY_ID a2, unsigned int *a3)
{
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v3 = 0;
  *a3 = 0;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 3;
        if ( v6 )
        {
          if ( v6 == 14 )
            *a3 = 28;
          else
            return (unsigned int)-1073741275;
        }
        else
        {
          *a3 = 24;
        }
      }
      else
      {
        *a3 = 16;
      }
    }
    else
    {
      *a3 = 32;
    }
  }
  else
  {
    *a3 = 40;
  }
  return v3;
}
