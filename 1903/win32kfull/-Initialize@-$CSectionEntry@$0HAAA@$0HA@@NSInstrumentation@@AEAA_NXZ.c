/*
 * XREFs of ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1C024122C
 * Callers:
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0240DBC (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C015E078 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C015E0C0 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C02100C4 (-Create@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<28672,112>::Initialize(PVOID *a1)
{
  NSInstrumentation *Section; // rax
  PVOID *v3; // rax
  bool result; // al

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x7000);
  a1[2] = Section;
  result = 0;
  if ( Section )
  {
    if ( NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x7000) >= 0 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Create((__int64)a1[3]);
      a1[4] = v3;
      if ( v3 )
        return 1;
    }
  }
  return result;
}
